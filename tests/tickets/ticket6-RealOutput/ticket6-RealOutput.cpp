#include <Step/SPFFunctions.h>
#include <Step/BaseSPFWriter.h>
#include "../../tests.h"

#include <sstream>
#include <cassert>
#include <cfloat>

#ifdef WIN32
#pragma execution_character_set("utf-8");
#endif

class MySPFWriter : public Step::BaseSPFWriter
{
public:

    MySPFWriter() : Step::BaseSPFWriter(0) {}

    ~MySPFWriter() override {}

    bool write(std::ostream& ) override { return true; }

    virtual std::string toSPF(Step::Real d)
    {
        std::ostringstream out;
        m_out = &out;
        writeAttribute(d);
        return out.str();
    }
};

/// testing Real Output

#define NB_TEST 12

double input[NB_TEST]={
    1.e30,
    1.e98,
    100000000.0,
    1.e8,
    1.e15,
    -100000000.0,
    -1.e8,
    -1.e15,
    1.e-15,
    -1.e-15,
    0.,
    .5,

};

std::string expected_result[NB_TEST]={
#ifdef WIN32
    "1.E+030",
    "1.E+098",
#else
    "1.E+30",
    "1.E+98",
#endif
    "100000000.",
    "100000000.",
    "1000000000000000.",
    "-100000000.",
    "-100000000.",
    "-1000000000000000.",
    "0.000000000000001",
    "-0.000000000000001",
    "0.",
    "0.5",
};


bool equivalent(double a, double b)
{
    if (a!=0 && b!=0)
    {
        double diff = a - b;
        double precision = a * DBL_EPSILON*10.;
        if (a<0)
        {
            precision = -precision;
        }
        bool over = diff > -precision;
        bool below = diff < precision;

        return below && over;
    }
    return true;
}

void test_Real()
{
    std::cerr << "test_Real" << std::endl;


    MySPFWriter writer;

    TEST_ASSERT(writer.toSPF(100000000) == "100000000.");
    TEST_ASSERT(writer.toSPF(1e8) == "100000000.");
    TEST_ASSERT(writer.toSPF(1e15) == "1000000000000000.");
    TEST_ASSERT(writer.toSPF(-100000000) == "-100000000.");
    TEST_ASSERT(writer.toSPF(-1e8) == "-100000000.");
    TEST_ASSERT(writer.toSPF(-1e15) == "-1000000000000000.");

    for(int i=0;i<NB_TEST;++i) {
        std::cerr << " input           = " << input[i] << std::endl <<
                     " expected_result = \"" << expected_result[i] << "\"" << std::endl;
        std::string SPFResult = writer.toSPF(input[i]);

        std::cerr << " SPFResult       = \"" << SPFResult << "\"" << std::endl;
        TEST_ASSERT(expected_result[i] == SPFResult);

        Step::Real result = Step::spfToReal(SPFResult);

        std::cerr << " result          = " << result << std::endl <<
                     " expected_result = " << input[i] << std::endl;
        TEST_ASSERT(equivalent(input[i], result));
        std::cerr << std::endl;
    }
}

void testTime()
{
    MySPFWriter writer;

    time_t start;
    time_t end;
    time(&start);

    int failures =0;

    for (double i=0; i < 5e11 ; i+=150000.57)
    {
        std::string SPFResult = writer.toSPF(i);
        Step::Real result = Step::spfToReal(SPFResult);
        if (!equivalent(i,result))
        {
            ++failures;
            std::cerr.precision(32);
            std::cerr << "Failure : " << i << " -> \"" << SPFResult << "\" -> " << result << std::endl;
        }
    }
    time(&end);
    std::cerr << "testTime = " <<  difftime(end, start) << " seconds" << std::endl;

    TEST_ASSERT(failures==0)
}

int main (int , char **)
{
    test_Real();
    testTime();

    std::cerr << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
