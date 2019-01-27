//
// LRUCacheTest.h
//
// Tests for LRUCache
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//

#ifndef LRUCacheTest_INCLUDED
#define LRUCacheTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/KeyValueArgs.h"
#include "Poco/CppUnit/TestCase.h"


//class LRUCacheTest: public CppUnit::TestCase
class LRUCacheTest: public CppUnit::TestFixture
{
public:
//	LRUCacheTest(const std::string& name);
	LRUCacheTest();
	~LRUCacheTest();

	void testClear();
	void testCacheSize0();
	void testCacheSize1();
	void testCacheSize2();
	void testCacheSizeN();
	void testDuplicateAdd();
	void testUpdate();

	void setUp();
	void tearDown();
	static CppUnit::Test* suite();

private:
	void onUpdate(const void* pSender, const Poco::KeyValueArgs<int, int>& args);
	void onAdd(const void* pSender, const Poco::KeyValueArgs<int, int>& args);
	void onRemove(const void* pSender, const int& args);

private:
	int addCnt;
	int updateCnt;
	int removeCnt;
};


#endif // LRUCacheTest_INCLUDED
