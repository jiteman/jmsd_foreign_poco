//
// HMACEngineTest.h
//
// Definition of the HMACEngineTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef HMACEngineTest_INCLUDED
#define HMACEngineTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class HMACEngineTest: public CppUnit::TestCase
class HMACEngineTest: public CppUnit::TestFixture
{
public:
//	HMACEngineTest(const std::string& name);
	HMACEngineTest();
	~HMACEngineTest();

	void testHMAC();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // HMACEngineTest_INCLUDED
