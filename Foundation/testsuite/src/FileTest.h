//
// FileTest.h
//
// Definition of the FileTest class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef FileTest_INCLUDED
#define FileTest_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"


//class FileTest: public CppUnit::TestCase
class FileTest: public CppUnit::TestFixture
{
public:
//	FileTest(const std::string& name);
	FileTest();
	~FileTest();

	void testFileAttributes1();
	void testCreateFile();
	void testFileAttributes2();
	void testFileAttributes3();
	void testCompare();
	void testSwap();
	void testSize();
	void testSpace();
	void testDirectory();
	void testCopy();
	void testMove();
	void testCopyDirectory();
	void testRename();
	void testRootDir();
	void testLongPath();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};


#endif // FileTest_INCLUDED
