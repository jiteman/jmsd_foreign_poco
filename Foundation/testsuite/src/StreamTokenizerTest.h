//
// StreamTokenizerTest.h
//
// Definition of the StreamTokenizerTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef StreamTokenizerTest_INCLUDED
#define StreamTokenizerTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class StreamTokenizerTest: public CppUnit::TestCase
class StreamTokenizerTest: public CppUnit::TestFixture
{
public:
//	StreamTokenizerTest(const std::string& name);
	StreamTokenizerTest();
	~StreamTokenizerTest();

	void testTokenizer1();
	void testTokenizer2();
	void testTokenizer3();
	void testTokenizer4();
	void testTokenizer5();
	void testTokenizer6();
	void testTokenizer7();
	void testTokenizer8();
	void testTokenizer9();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // StreamTokenizerTest_INCLUDED
