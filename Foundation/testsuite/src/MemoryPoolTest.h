//
// MemoryPoolTest.h
//
// Definition of the MemoryPoolTest class.
//
// Copyright (c) 2005-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef MemoryPoolTest_INCLUDED
#define MemoryPoolTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class MemoryPoolTest: public CppUnit::TestCase
class MemoryPoolTest: public CppUnit::TestFixture
{
public:
//	MemoryPoolTest(const std::string& name);
	MemoryPoolTest();
	~MemoryPoolTest();

	void testMemoryPool();
	void testFastMemoryPool();
	void memoryPoolBenchmark();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // MemoryPoolTest_INCLUDED
