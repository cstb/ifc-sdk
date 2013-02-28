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

    std::string expected_result[NB_STRINGS]={
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

        std::cerr << " result          = " << result.toISO_8859(Step::String::Western_European) << std::endl;

		TEST_ASSERT( expected_result[i] == result.toISO_8859(Step::String::Western_European));

        std::string SPFresult = result.toSPF();
        std::cerr << " SPFresult          = " << SPFresult << std::endl <<
                     " SPF_expected_result= " << SPF_expected_result[i] << std::endl;
        TEST_ASSERT(SPF_expected_result[i] == SPFresult);

		Step::String fromI = Step::String::fromISO_8859(expected_result[i],Step::String::Western_European);

		TEST_ASSERT( expected_result[i] == fromI.toISO_8859(Step::String::Western_European));
        std::cerr << std::endl;
    }
}

int main (int , char **)
{
    test_parseStrings();

    std::cerr << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
