//
// FoundationTestSuite.h
//
// Definition of the FoundationTestSuite class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef FoundationTestSuite_INCLUDED
#define FoundationTestSuite_INCLUDED


#include "Poco/CppUnit/TestSuite.h"


#include "tp_foundation.h"


class JMSD_TEST_POCO_FOUNDATION_SHARED_INTERFACE FoundationTestSuite
{
public:
	static CppUnit::Test* suite();
};


#endif // FoundationTestSuite_INCLUDED
