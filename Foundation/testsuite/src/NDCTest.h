//
// NDCTest.h
//
// Definition of the NDCTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef NDCTest_INCLUDED
#define NDCTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class NDCTest: public CppUnit::TestCase
class NDCTest: public CppUnit::TestFixture
{
public:
//	NDCTest(const std::string& name);
	NDCTest();
	~NDCTest();

	void testNDC();
	void testNDCScope();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // NDCTest_INCLUDED
