//
// ChildNodesTest.h
//
// Definition of the ChildNodesTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef ChildNodesTest_INCLUDED
#define ChildNodesTest_INCLUDED


#include "Poco/XML/XML.h"
#include "Poco/CppUnit/TestCase.h"


//class ChildNodesTest: public CppUnit::TestCase
class ChildNodesTest: public CppUnit::TestFixture
{
public:
//	ChildNodesTest(const std::string& name);
	ChildNodesTest();
	~ChildNodesTest();

	void testChildNodes();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // ChildNodesTest_INCLUDED
