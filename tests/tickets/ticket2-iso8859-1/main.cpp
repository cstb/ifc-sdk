#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include "../../tests.h"

#include <sstream>

/// /!\ WARNING this file relies on UTF-8 encoding for string comparison !!!

void test_parseStrings()
{
    std::cerr << "test_parseStrings" << std::endl;

    #define NB_STRINGS 3
    std::string input[NB_STRINGS]={
        "'Cr\\S\\ipit'",
        "'Br\\S\\oque'",
        "'O\\S\\tptim\\S\\y'"
    };

    Step::String expected_result[NB_STRINGS]={
        "Crépit",
        "Brïque",
        "Oôptimù"
    };

    std::string SPF_expected_result[NB_STRINGS]={
        "'Cr\\S\\ipit'",
        "'Br\\S\\oque'",
        "'O\\S\\tptim\\S\\y'"
    };

    for(int i=0;i<NB_STRINGS;++i) {
        std::cerr << " input           = " << input[i] << std::endl <<
                     " expected_result = " << expected_result[i] << std::endl;
        Step::String result = Step::String::fromSPF(input[i]);

        std::cerr << " result          = " << result << std::endl;
        TEST_ASSERT(expected_result[i] == result);

        std::string SPFresult = result.toSPF();
        std::cerr << " SPFresult          = " << SPFresult << std::endl <<
                     " SPF_expected_result= " << SPF_expected_result[i] << std::endl;
        TEST_ASSERT(SPF_expected_result[i] == SPFresult);
        std::cerr << std::endl;
    }
}

int main (int n, char **p)
{
    test_parseStrings();

    std::cerr << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
