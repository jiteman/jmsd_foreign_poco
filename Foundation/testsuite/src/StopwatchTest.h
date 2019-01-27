//
// StopwatchTest.h
//
// Definition of the StopwatchTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef StopwatchTest_INCLUDED
#define StopwatchTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class StopwatchTest: public CppUnit::TestCase
class StopwatchTest: public CppUnit::TestFixture
{
public:
//	StopwatchTest(const std::string& name);
	StopwatchTest();
	~StopwatchTest();

	void testStopwatch();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // StopwatchTest_INCLUDED
