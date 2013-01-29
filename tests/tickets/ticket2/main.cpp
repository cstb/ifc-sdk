#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include "../../tests.h"

#include <sstream>


/// tests for ticket2

/// /!\ WARNING this file relies on UTF-8 encoding for string comparison !!!

/**
In tas_arm_support\src\Step\SPFFunctions.cpp line 157 and further

It seems that an escaped quote (two consecutive single quotes) inside a string
in a part 21 file is not recognized. Also double reverse solidus \\ and Unicode
characters \X... are not processed.

Handle all possible valid character sequences in Part 21 files as specified in
ISO 10303-21:2002. Concerning Unicode, at least the characters in the latin-1
encoding should be handled. Define a way in which LightCpp can provide Unicode
support in the future.
*/

void test_getLine()
{
    std::cerr << "test_getLine" << std::endl;

    std::string input("#1 = TOTO('first line $\nsecond line *');");
    std::string expected_result("#1=TOTO('first line $\nsecond line *')");

    std::istringstream in(input);
    unsigned int counter=0;
    char buffer[1024];
    std::string result;

    TEST_ASSERT(Step::getLine(in,counter,buffer,1024,result));

    std::cerr << "input = " << input << std::endl;
    std::cerr << "result = " << result << std::endl;


    TEST_ASSERT(counter==1);

    TEST_ASSERT(expected_result == result);
    std::cerr << "input           = " << input << std::endl;
    std::cerr << "result          = " << result << std::endl;
    std::cerr << "expected_result = " << expected_result << std::endl << std::endl;

    input = "#1 = TOTO(' text in ''quotes''');";
    expected_result = "#1=TOTO(' text in ''quotes''')";
    result = "";

    std::istringstream in2(input);
    TEST_ASSERT(Step::getLine(in2,counter,buffer,1024,result));

    std::cerr << "input = " << input << std::endl;
    std::cerr << "result = " << result << std::endl;

    TEST_ASSERT(expected_result == result);
    std::cerr << "input           = " << input << std::endl;
    std::cerr << "result          = " << result << std::endl;
    std::cerr << "expected_result = " << expected_result << std::endl << std::endl;

}

void test_removeQuotes()
{
    std::cerr << "test_removeQuotes" << std::endl;

    std::string input("'first line $\\nsecond line *'");
    std::string expected_result("first line $\\nsecond line *");

    std::cerr << "input = " << input << std::endl;

    TEST_ASSERT(Step::removeQuotes(input));

    std::cerr << "result = " << input << std::endl;


    TEST_ASSERT(expected_result == input);
//    std::cerr << "input           = " << input << std::endl;
//    std::cerr << "result          = " << result << std::endl;
    std::cerr << "expected_result = " << expected_result << std::endl << std::endl;


    input = "' text in ''quotes'''";
    expected_result = " text in ''quotes''";

    std::cerr << "input = " << input << std::endl;

    TEST_ASSERT(Step::removeQuotes(input));

    std::cerr << "result = " << input << std::endl;

    TEST_ASSERT(expected_result == input);
    std::cerr << "expected_result = " << expected_result << std::endl << std::endl;
}

void test_parseStrings()
{
    std::cerr << "test_parseStrings" << std::endl;

    #define NB_STRINGS 17
    std::string input[NB_STRINGS]={
        "'CAT'",
        "'Don''t'",
        "''''",
        "''",
        "'\\S\\Drger'",
        "'h\\S\\ttel'",
        "'\\PE\\\\S\\*\\S\\U\\S\\b'",
        "'\\PE\\\\S\\*\\S\\U\\S\\b\\X2\\2018\\X0\\'",
        "'\\X2\\03930395063A\\X0\\'",
        "'\\X2\\600060A26DBB\\X0\\'",
        "'\\X4\\00020021000200460002020C\\X0\\'",
        "'Build Number of the Ifc 2x3 interface: 63089 (04-06-2008)\\X\\0A'",
        "'D\\X\\E9faut B\\X\\E2timent'",
        "'Rev\\X\\EAt. murs ext.'",
        "'Murs neufs cl\\X\\F4tures'",
        "'R\\X\\C9UNION'",
        "ENDUIT DE LISSAGE & PRIMAIRE D\\X2\\2018\\X0\\ACCROCHAGE"
    };

    Step::String expected_result[NB_STRINGS]={
        L"CAT",
        L"Don't",
        L"'",
        L"",
        L"\u00C4rger",
        L"h\u00F4tel",
        L"\u040A\u0435\u0442",
        L"\u040A\u0435\u0442\u2018",
        L"ΓΕغ",
        L"怀悢涻",
        L"𠀡𠁆𠈌",
        L"Build Number of the Ifc 2x3 interface: 63089 (04-06-2008)\n",
        L"D\u00E9faut B\u00E2timent",
        L"Rev\u00EAt. murs ext.",
        L"Murs neufs cl\u00F4tures",
        L"R\u00C9UNION",
        L"ENDUIT DE LISSAGE & PRIMAIRE D\u2018ACCROCHAGE"
        };

    std::string SPF_expected_result[NB_STRINGS]={
        "'CAT'",
        "'Don''t'",
        "''''",
        "''",
        "'\\S\\Drger'",
        "'h\\S\\ttel'",
        "'\\PE\\\\S\\*\\S\\U\\S\\b'",
        "'\\PE\\\\S\\*\\S\\U\\S\\b\\X2\\2018\\X0\\'",
        "'\\X2\\03930395063A\\X0\\'",
        "'\\X2\\600060A26DBB\\X0\\'",
        "'\\X4\\00020021000200460002020C\\X0\\'",
        "'Build Number of the Ifc 2x3 interface: 63089 (04-06-2008)\\X\\0A'",
        "'D\\S\\ifaut B\\S\\btiment'",
        "'Rev\\S\\jt. murs ext.'",
        "'Murs neufs cl\\S\\ttures'",
        "'R\\S\\IUNION'",
        "'ENDUIT DE LISSAGE & PRIMAIRE D\\X2\\2018\\X0\\ACCROCHAGE'"
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
    test_getLine();
    test_removeQuotes();
    test_parseStrings();

    std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
