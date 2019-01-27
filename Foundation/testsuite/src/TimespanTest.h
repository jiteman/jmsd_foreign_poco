//
// TimespanTest.h
//
// Definition of the TimespanTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef TimespanTest_INCLUDED
#define TimespanTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class TimespanTest: public CppUnit::TestCase
class TimespanTest: public CppUnit::TestFixture
{
public:
//	TimespanTest(const std::string& name);
	TimespanTest();
	~TimespanTest();

	void testConversions();
	void testComparisons();
	void testArithmetics();
	void testSwap();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // TimespanTest_INCLUDED
