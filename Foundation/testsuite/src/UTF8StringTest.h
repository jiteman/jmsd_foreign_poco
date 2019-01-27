//
// UTF8StringTest.h
//
// Definition of the UTF8StringTest class.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef UTF8StringTest_INCLUDED
#define UTF8StringTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class UTF8StringTest: public CppUnit::TestCase
class UTF8StringTest: public CppUnit::TestFixture
{
public:
//	UTF8StringTest(const std::string& name);
	UTF8StringTest();
	~UTF8StringTest();

	void testCompare();
	void testTransform();

	void testEscape();
	void testUnescape();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // UTF8StringTest_INCLUDED
