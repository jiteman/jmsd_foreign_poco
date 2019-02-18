//
// XMLTestSuite.h
//
// Definition of the XMLTestSuite class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef XMLTestSuite_INCLUDED
#define XMLTestSuite_INCLUDED


#include "Poco/CppUnit/TestSuite.h"

#include "tp_xml.h"


class JMSD_TEST_POCO_XML_SHARED_INTERFACE XMLTestSuite
{
public:
	static CppUnit::Test* suite();
};


#endif // XMLTestSuite_INCLUDED
