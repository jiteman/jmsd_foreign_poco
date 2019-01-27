//
// SharedPtrTest.h
//
// Definition of the SharedPtrTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef SharedPtrTest_INCLUDED
#define SharedPtrTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class SharedPtrTest: public CppUnit::TestCase
class SharedPtrTest: public CppUnit::TestFixture
{
public:
//	SharedPtrTest(const std::string& name);
	SharedPtrTest();
	~SharedPtrTest();

	void testSharedPtr();

	void testImplicitCast();
	void testExplicitCast();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // SharedPtrTest_INCLUDED
