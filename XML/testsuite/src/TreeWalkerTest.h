//
// TreeWalkerTest.h
//
// Definition of the TreeWalkerTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef TreeWalkerTest_INCLUDED
#define TreeWalkerTest_INCLUDED


#include "Poco/XML/XML.h"
#include "Poco/CppUnit/TestCase.h"


//class TreeWalkerTest: public CppUnit::TestCase
class TreeWalkerTest: public CppUnit::TestFixture
{
public:
//	TreeWalkerTest(const std::string& name);
	TreeWalkerTest();
	~TreeWalkerTest();

	void testShowAll();
	void testShowElements();
	void testFilter();
	void testShowNothing();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // TreeWalkerTest_INCLUDED
