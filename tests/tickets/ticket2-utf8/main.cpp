#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include "../../tests.h"

#include <sstream>

#pragma execution_character_set("utf-8");

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

    #define NB_STRINGS 18
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
        "ENDUIT DE LISSAGE & PRIMAIRE D\\X2\\2018\\X0\\ACCROCHAGE",
        "'\\S\\Drgerh\\S\\ttel\\PE\\\\S\\*\\S\\U\\S\\b\\PE\\\\S\\*\\S\\U\\S\\b\\X2\\2018\\X0\\\\X2\\03930395063A\\X0\\\\X2\\600060A26DBB\\X0\\\\X4\\00020021000200460002020C\\X0\\'"
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
        L"\u0393\u0395\u063A",
        L"\u6000\u60A2\u6DBB",
        L"\U00020021\U00020046\U0002020C",
        L"Build Number of the Ifc 2x3 interface: 63089 (04-06-2008)\n",
        L"D\u00E9faut B\u00E2timent",
        L"Rev\u00EAt. murs ext.",
        L"Murs neufs cl\u00F4tures",
        L"R\u00C9UNION",
        L"ENDUIT DE LISSAGE & PRIMAIRE D\u2018ACCROCHAGE",
        L"\u00C4rgerh\u00F4tel\u040A\u0435\u0442\u040A\u0435\u0442\u2018\u0393\u0395\u063A\u6000\u60A2\u6DBB\U00020021\U00020046\U0002020C"
        };

    std::string SPF_expected_result[NB_STRINGS]={
        "'CAT'",
        "'Don''t'",
        "''''",
        "''",
        "'\\S\\Drger'",
        "'h\\S\\ttel'",
        "'\\PE\\\\S\\*\\S\\U\\S\\b'",
        "'\\PE\\\\S\\*\\S\\U\\S\\b\\PG\\\\S\\!'",
        "'\\PG\\\\S\\C\\S\\E\\PF\\\\S\\Z'",
        "'\\X2\\600060A26DBB\\X0\\'",
        "'\\X4\\00020021000200460002020C\\X0\\'",
        "'Build Number of the Ifc 2x3 interface: 63089 (04-06-2008)\\X\\0A'",
        "'D\\S\\ifaut B\\S\\btiment'",
        "'Rev\\S\\jt. murs ext.'",
        "'Murs neufs cl\\S\\ttures'",
        "'R\\S\\IUNION'",
        "'ENDUIT DE LISSAGE & PRIMAIRE D\\PG\\\\S\\!ACCROCHAGE'",
        "'\\S\\Drgerh\\S\\ttel\\PE\\\\S\\*\\S\\U\\S\\b\\S\\*\\S\\U\\S\\b\\PG\\\\S\\!\\S\\C\\S\\E\\PF\\\\S\\Z\\X2\\600060A26DBB\\X0\\\\X4\\00020021000200460002020C\\X0\\'"
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

void test_UpperAUmlaut()
{
    /* character code of D = x44 (decimal 68) added to x80 (128) is
     * x44 + x80 (68+128) = xC4 (196); since Ä is defined in ISO 8859-1
     * it is the default code page and no \P encoding is required. */
    Step::String a = Step::String::fromSPF("'\\S\\D'");
    std::cerr << "a="<< a << std::endl;

    /* same as above, but the \PA\ directive at the begin of the string
     * explicitly defines that the value of xC4 (196) is taken from ISO 8859-1*/
    Step::String b = Step::String::fromSPF("'\\PA\\\\S\\D'");
    std::cerr << "b="<< b << std::endl;

    /* character code xC4 as 8-bit character code found in ISO 10646 (first 255
     * characters - also referred to as "row 0") */
    Step::String c = Step::String::fromSPF("'\\X\\C4'");
    std::cerr << "c="<< c << std::endl;

    /* character code xC4 as 16-bit character x00C4 in ISO 10646 (Unicode) */
    Step::String d = Step::String::fromSPF("'\\X2\\00C4\\X0\\'");
    std::cerr << "d="<< d << std::endl;

    TEST_ASSERT(a==b);
    TEST_ASSERT(b==c);
    TEST_ASSERT(c==d);


}

void test_LATINSMALLLETTERYWITHDIAERESIS()
{
    /* ÿ */
    Step::String a("ÿ");
    std::cerr << "a="<< a << std::endl;

    /* character code xFF as 8-bit character code found in ISO 10646 (first 255
     * characters - also referred to as "row 0") */
    Step::String b = Step::String::fromSPF("'\\X\\FF'");
    std::cerr << "b="<< b << std::endl;

    /* character code xFF as 16-bit character x00FF in ISO 10646 (Unicode) */
    Step::String c = Step::String::fromSPF("'\\X2\\00FF\\X0\\'");
    std::cerr << "c="<< c << std::endl;

    TEST_ASSERT(a==b);
    TEST_ASSERT(b==c);

    std::cerr << "c.toSPF()="<< c.toSPF() << std::endl;

    TEST_ASSERT( c.toSPF() == "'\\X\\FF'");

}


void test_toLatin1()
{
	Step::String uuid("33Ff7op$XFlubqbkQl5K$B");

	std::string result = uuid.toUTF8();

	std::cerr << "result=" << result << std::endl;

	TEST_ASSERT(result == "33Ff7op$XFlubqbkQl5K$B");
}


int main (int , char **)
{
    test_getLine();
    test_removeQuotes();
    test_parseStrings();
    test_UpperAUmlaut();
	test_toLatin1();
    test_LATINSMALLLETTERYWITHDIAERESIS();

    std::cerr << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
