//
// ZipTestSuite.h
//
// Definition of the ZipTestSuite class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef ZipTestSuite_INCLUDED
#define ZipTestSuite_INCLUDED


#include "Poco/CppUnit/TestSuite.h"

#include "tp_zip.h"


class JMSD_TEST_POCO_ZIP_SHARED_INTERFACE ZipTestSuite
{
public:
	static CppUnit::Test* suite();
};


#endif // ZipTestSuite_INCLUDED
