//
// LinearHashTableTest.h
//
// Definition of the LinearHashTableTest class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef LinearHashTableTest_INCLUDED
#define LinearHashTableTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class LinearHashTableTest: public CppUnit::TestCase
class LinearHashTableTest: public CppUnit::TestFixture
{
public:
//	LinearHashTableTest(const std::string& name);
	LinearHashTableTest();
	~LinearHashTableTest();

	void testInsert();
	void testErase();
	void testIterator();
	void testConstIterator();
	void testPerformanceInt();
	void testPerformanceStr();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // LinearHashTableTest_INCLUDED
