//
// LogStreamTest.h
//
// Definition of the LogStreamTest class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// All rights reserved.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef LogStreamTest_INCLUDED
#define LogStreamTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class LogStreamTest: public CppUnit::TestCase
class LogStreamTest: public CppUnit::TestFixture
{
public:
//	LogStreamTest(const std::string& name);
	LogStreamTest();
	~LogStreamTest();

	void testLogStream();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // LogStreamTest_INCLUDED
