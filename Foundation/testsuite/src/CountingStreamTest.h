//
// CountingStreamTest.h
//
// Definition of the CountingStreamTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef CountingStreamTest_INCLUDED
#define CountingStreamTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class CountingStreamTest: public CppUnit::TestCase
class CountingStreamTest: public CppUnit::TestFixture
{
public:
//	CountingStreamTest(const std::string& name);
	CountingStreamTest();
	~CountingStreamTest();

	void testInput();
	void testOutput();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // CountingStreamTest_INCLUDED
