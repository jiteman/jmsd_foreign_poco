//
// ThreadTest.h
//
// Definition of the ThreadTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef ThreadTest_INCLUDED
#define ThreadTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class ThreadTest: public CppUnit::TestCase
class ThreadTest: public CppUnit::TestFixture
{
public:
//	ThreadTest(const std::string& name);
	ThreadTest();
	~ThreadTest();

    void testThread();
    void testNamedThread();
    void testCurrent();
    void testThreads();
    void testJoin();
    void testNotJoin();
    void testNotRun();
    void testNotRunJoin();
    void testTrySleep();
    void testThreadTarget();
    void testThreadFunction();
    void testThreadFunctor();
    void testThreadStackSize();
    void testSleep();
    void testAffinity();
    void testJoinNotStarted();

    void setUp();
    void tearDown();

    static CppUnit::Test* suite();

private:
};


#endif // ThreadTest_INCLUDED
