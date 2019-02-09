//
// NamePoolTest.h
//
// Definition of the NamePoolTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef NamePoolTest_INCLUDED
#define NamePoolTest_INCLUDED


#include "Poco/XML/XML.h"
#include "Poco/CppUnit/TestCase.h"


//class NamePoolTest: public CppUnit::TestCase
class NamePoolTest: public CppUnit::TestFixture
{
public:
//	NamePoolTest(const std::string& name);
	NamePoolTest();
	~NamePoolTest();

	void testNamePool();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // NamePoolTest_INCLUDED
