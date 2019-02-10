//
// PartialStreamTest.h
//
// Definition of the PartialStreamTest class.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef PartialStreamTest_INCLUDED
#define PartialStreamTest_INCLUDED


#include "Poco/Zip/Zip.h"
#include "Poco/CppUnit/TestCase.h"


//class PartialStreamTest: public CppUnit::TestCase
class PartialStreamTest: public CppUnit::TestFixture
{
public:
	PartialStreamTest(const std::string& name);
	PartialStreamTest();
	~PartialStreamTest();

	void testReading();
	void testWriting();
	void testWritingZero();
	void testWritingOne();
	void testAutoDetect();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // PartialStreamTest_INCLUDED
