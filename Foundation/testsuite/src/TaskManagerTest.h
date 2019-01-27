//
// TaskManagerTest.h
//
// Definition of the TaskManagerTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef TaskManagerTest_INCLUDED
#define TaskManagerTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class TaskManagerTest: public CppUnit::TestCase
class TaskManagerTest: public CppUnit::TestFixture
{
public:
	struct S
	{
		int i;
		std::string str;
	};

//	TaskManagerTest(const std::string& name);
	TaskManagerTest();
	~TaskManagerTest();

	void testFinish();
	void testCancel();
	void testError();
	void testCustom();
	void testMultiTasks();
	void testTaskInclusion();
	void testTaskQueue();
	void testCustomThreadPool();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // TaskManagerTest_INCLUDED
