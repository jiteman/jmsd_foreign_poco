//
// SystemConfigurationTest.h
//
// Definition of the SystemConfigurationTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef SystemConfigurationTest_INCLUDED
#define SystemConfigurationTest_INCLUDED


#include "Poco/Util/Util.h"
#include "Poco/CppUnit/TestCase.h"


//class SystemConfigurationTest: public CppUnit::TestCase
class SystemConfigurationTest: public CppUnit::TestFixture
{
public:
//	SystemConfigurationTest(const std::string& name);
	SystemConfigurationTest();
	~SystemConfigurationTest();

	void testProperties();
	void testKeys();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // SystemConfigurationTest_INCLUDED
