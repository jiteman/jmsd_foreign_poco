//
// DigestStreamTest.h
//
// Definition of the DigestStreamTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef DigestStreamTest_INCLUDED
#define DigestStreamTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class DigestStreamTest: public CppUnit::TestCase
class DigestStreamTest: public CppUnit::TestFixture
{
public:
//	DigestStreamTest(const std::string& name);
	DigestStreamTest();
	~DigestStreamTest();

	void testInputStream();
	void testOutputStream1();
	void testOutputStream2();
	void testToFromHex();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // DigestStreamTest_INCLUDED
