//
// RandomStreamTest.h
//
// Definition of the RandomStreamTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef RandomStreamTest_INCLUDED
#define RandomStreamTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class RandomStreamTest: public CppUnit::TestCase
class RandomStreamTest: public CppUnit::TestFixture
{
public:
//	RandomStreamTest(const std::string& name);
	RandomStreamTest();
	~RandomStreamTest();

	void testStream();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // RandomStreamTest_INCLUDED
