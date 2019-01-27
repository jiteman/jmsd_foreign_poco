//
// NamedEventTest.h
//
// Definition of the NamedEventTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef NamedEventTest_INCLUDED
#define NamedEventTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class NamedEventTest: public CppUnit::TestCase
class NamedEventTest: public CppUnit::TestFixture
{
public:
//	NamedEventTest(const std::string& name);
	NamedEventTest();
	~NamedEventTest();

	void testNamedEvent();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // NamedEventTest_INCLUDED
