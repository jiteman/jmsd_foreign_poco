//
// ObjectPoolTest.h
//
// Definition of the ObjectPoolTest class.
//
// Copyright (c) 2010-2012, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef ObjectPoolTest_INCLUDED
#define ObjectPoolTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class ObjectPoolTest: public CppUnit::TestCase
class ObjectPoolTest: public CppUnit::TestFixture
{
public:
//	ObjectPoolTest(const std::string& name);
	ObjectPoolTest();
	~ObjectPoolTest();

	void testObjectPool();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // ObjectPoolTest_INCLUDED
