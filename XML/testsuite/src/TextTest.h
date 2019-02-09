//
// TextTest.h
//
// Definition of the TextTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef TextTest_INCLUDED
#define TextTest_INCLUDED


#include "Poco/XML/XML.h"
#include "Poco/CppUnit/TestCase.h"


//class TextTest: public CppUnit::TestCase
class TextTest: public CppUnit::TestFixture
{
public:
//	TextTest(const std::string& name);
	TextTest();
	~TextTest();

	void testLength();
	void testSubstring();
	void testAppend();
	void testInsert();
	void testDelete();
	void testReplace();
	void testSplit();
	void testSplitCDATA();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // TextTest_INCLUDED
