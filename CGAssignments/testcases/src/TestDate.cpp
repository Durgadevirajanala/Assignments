#include <bits/stdc++.h>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include <Date.h>

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class TestDate : public CppUnit::TestFixture
{
//todo :include the test functions for leap year and monthname i.e testcheckLeapYear(), testMonthName()
    CPPUNIT_TEST_SUITE(TestDate);
	CPPUNIT_TEST(testcheckLeapYear);
    CPPUNIT_TEST(testMonthName);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testcheckLeapYear(void);
    void testMonthName(void);


private:

    Date *mTestObj;
	};

//-----------------------------------------------------------------------------
//todo Implement the below functions

void 
TestDate::testcheckLeapYear(void)
{//todo add test code using ASSERT macro(s)

 CPPUNIT_ASSERT( 2001 == 2005 );
 CPPUNIT_ASSERT( 2001 == 2001 );
}
void
TestDate::testMonthName(void)
{//todo add test code using ASSERT macro(s)
    CPPUNIT_ASSERT( 1 == 1);
	CPPUNIT_ASSERT_EQUAL( 2, 2 );
}
	void TestDate::setUp(void)
{
    mTestObj = new Date(1,1,1969);
}
	void TestDate::tearDown(void)
{
    delete mTestObj;
}
//-----------------------------------------------------------------------------
CPPUNIT_TEST_SUITE_REGISTRATION( TestDate );
int main(int argc, char* argv[])
{
// informs test-listener about testresults
    CPPUNIT_NS::TestResult testresult;
// register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener (&collectedresults);
// register listener for per-test progress output
 CPPUNIT_NS::BriefTestProgressListener progress;
   testresult.addListener (&progress);
// insert test-suite at test-runner by registry
 CPPUNIT_NS::TestRunner testrunner;
 testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
 testrunner.run(testresult);
// output results in compiler-format
  CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
  compileroutputter.write ();
// Output XML for Jenkins CPPunit plugin
  ofstream xmlFileOut("cppDateResults.xml");
  XmlOutputter xmlOut(&collectedresults, xmlFileOut);
  xmlOut.write();
// return 0 if tests were successful
  return collectedresults.wasSuccessful() ? 0 : 1;
}

