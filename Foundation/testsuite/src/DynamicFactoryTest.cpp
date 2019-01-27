//
// DynamicFactoryTest.cpp
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "DynamicFactoryTest.h"
#include "Poco/CppUnit/TestCaller.h"
#include "Poco/CppUnit/TestSuite.h"
#include "Poco/DynamicFactory.h"
#include "Poco/RefCountedObject.h"
#include "Poco/Exception.h"
#include <memory>


using Poco::DynamicFactory;
using Poco::RefCountedObject;
using Poco::AutoPtr;
using Poco::Instantiator;


namespace
{
	class Base : public RefCountedObject
	{
	public:
		Base()
		{
		}

		virtual ~Base()
		{
		}
	};

	class A: public Base
	{
	};

	class B: public Base
	{
	};
}


//DynamicFactoryTest::DynamicFactoryTest(const std::string& rName): CppUnit::TestCase(rName)
DynamicFactoryTest::DynamicFactoryTest(): CppUnit::TestFixture()
{
}


DynamicFactoryTest::~DynamicFactoryTest()
{
}


void DynamicFactoryTest::testDynamicFactoryAutoPtr()
{
	DynamicFactory<Base> dynFactory;

	dynFactory.registerClass<A>("A");
	dynFactory.registerClass<B>("B");

	assertTrue (dynFactory.isClass("A"));
	assertTrue (dynFactory.isClass("B"));

	assertTrue (!dynFactory.isClass("C"));

	AutoPtr<A> a(dynFactory.createInstance("A").cast<A>());
	AutoPtr<B> b(dynFactory.createInstance("B").cast<B>());

	assertNotNullPtr(a.get());
	assertNotNullPtr(b.get());

	try
	{
		dynFactory.registerClass<A>("A");
		failmsg("already registered - must throw");
	}
	catch (Poco::ExistsException&)
	{
	}

	dynFactory.unregisterClass("B");
	assert (dynFactory.isClass("A"));
	assert (!dynFactory.isClass("B"));

	try
	{
		AutoPtr<B> b(dynFactory.createInstance("B").cast<B>());
		failmsg("unregistered - must throw");
	}
	catch (Poco::NotFoundException&)
	{
	}
}


void DynamicFactoryTest::testDynamicFactoryPtr()
{
	DynamicFactory<Base, Base*> dynFactory;

	dynFactory.registerClass<A>("A");
	dynFactory.registerClass<B>("B");

	assert (dynFactory.isClass("A"));
	assert (dynFactory.isClass("B"));

	assert (!dynFactory.isClass("C"));

	std::unique_ptr<A> a(dynamic_cast<A*>(dynFactory.createInstance("A")));
	std::unique_ptr<B> b(dynamic_cast<B*>(dynFactory.createInstance("B")));

	assertNotNullPtr(a.get());
	assertNotNullPtr(b.get());

	try
	{
		dynFactory.registerClass<A>("A");
		failmsg("already registered - must throw");
	}
	catch (Poco::ExistsException&)
	{
	}

	dynFactory.unregisterClass("B");
	assertTrue (dynFactory.isClass("A"));
	assertTrue (!dynFactory.isClass("B"));

	try
	{
		std::unique_ptr<B> b(dynamic_cast<B*>(dynFactory.createInstance("B")));
		failmsg("unregistered - must throw");
	}
	catch (Poco::NotFoundException&)
	{
	}
}


void DynamicFactoryTest::setUp()
{
}


void DynamicFactoryTest::tearDown()
{
}


CppUnit::Test* DynamicFactoryTest::suite()
{
	CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DynamicFactoryTest");

	CppUnit_addTest(pSuite, DynamicFactoryTest, testDynamicFactoryPtr);
	CppUnit_addTest(pSuite, DynamicFactoryTest, testDynamicFactoryAutoPtr);

	return pSuite;
}
