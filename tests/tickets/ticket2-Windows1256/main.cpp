#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include "../../tests.h"

#include <sstream>

void test_parseWindows1256Strings()
{
    Step::String::setDefaultCodePage(Step::String::Windows1256);
    std::cerr << "test_parseStrings" << std::endl;

    #define NB_STRINGS 4
    std::string input[NB_STRINGS]=
    {
        "D\x91 ACCROCHAGE",
        "Cr\xE9pit",
        "Br\xEFque",
        "O\xF4ptim\xF9"
    };

    std::string SPF_expected_result[NB_STRINGS]=
    {
        "'D\\PG\\\\S\\! ACCROCHAGE'",
        "'Cr\\S\\ipit'",
        "'Br\\S\\oque'",
        "'O\\S\\tptim\\S\\y'"
    };

    for(int i=0;i<NB_STRINGS;++i) {

        Step::String result(input[i]);
        std::string SPFresult = result.toSPF();

        std::cerr << " input              = " << input[i] << std::endl <<
                     " SPF_expected_result= " << SPF_expected_result[i] << std::endl <<
                     " SPF          result= " <<  SPFresult << std::endl;

        TEST_ASSERT(SPF_expected_result[i] == SPFresult);



        std::cerr << std::endl;
    }
}

int main (int , char **)
{
    test_parseWindows1256Strings();

    std::cerr << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
