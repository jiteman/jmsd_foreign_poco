//
// LoggerTest.h
//
// Definition of the LoggerTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef LoggerTest_INCLUDED
#define LoggerTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class LoggerTest: public CppUnit::TestCase
class LoggerTest: public CppUnit::TestFixture
{
public:
//	LoggerTest(const std::string& name);
	LoggerTest();
	~LoggerTest();

	void testLogger();
	void testFormat();
	void testFormatAny();
	void testDump();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // LoggerTest_INCLUDED
