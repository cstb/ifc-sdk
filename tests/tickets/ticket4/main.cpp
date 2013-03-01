#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/SimpleTypes.h>
#include "../../tests.h"

#include <sstream>


/// tests for ticket4

/**
All references to atof are now using the program's locale.
So for french the decimal separator is a , (comma) not a
point leading to wrong string to real conversions.
*/

#define REAL_VALUE -0.000000000000009991
#define REAL_STRING "-0.000000000000009991"

int main (int /*n*/, char ** /*p*/)
{
    std::string real_string(REAL_STRING);

    Step::Real real_value =
        Step::spfToReal(real_string);

	Step::Real diff = real_value - REAL_VALUE;
    TEST_ASSERT( -0.000000000000000001 < diff);
	TEST_ASSERT( diff < 0.000000000000000001 );

    std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
