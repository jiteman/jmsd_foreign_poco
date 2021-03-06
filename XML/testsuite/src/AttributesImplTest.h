//
// AttributesImplTest.h
//
// Definition of the AttributesImplTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef AttributesImplTest_INCLUDED
#define AttributesImplTest_INCLUDED


#include "Poco/XML/XML.h"
#include "Poco/CppUnit/TestCase.h"


//class AttributesImplTest: public CppUnit::TestCase
class AttributesImplTest: public CppUnit::TestFixture
{
public:
//	AttributesImplTest(const std::string& name);
	AttributesImplTest();
	~AttributesImplTest();

	void testNoNamespaces();
	void testNamespaces();
	void testAccessors();
	void testCopy();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // AttributesImplTest_INCLUDED
