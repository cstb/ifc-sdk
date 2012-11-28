#include <Step/String.h>
#include <QtCore/QString>

#include "../../tests.h"

#include <sstream>
#include <fstream>


/// tests for ticket5

/**
 Referencing an undeclared or undefined entity make the reader hang abruptly.
*/

int main (int n, char **p)
{
    Step::String uuid_step("3fO4772Iv9CYc5SOFbUgyn");

    std::string uuid_s = uuid_step.toSPF();

    TEST_ASSERT(uuid_s == "'3fO4772Iv9CYc5SOFbUgyn'");
    std::cout << uuid_s << " length : " << uuid_s.length() << std::endl;

    QString uuid_qt("3fO4772Iv9CYc5SOFbUgyn");

    uuid_step = Step::String(uuid_qt.toStdString());
    uuid_s = uuid_step.toSPF();

    TEST_ASSERT(uuid_s == "'3fO4772Iv9CYc5SOFbUgyn'");
    std::cout << uuid_s << " length : " << uuid_s.length() << std::endl;


    uuid_step = Step::String("3fO4772Iv9CYc5SOFbUgyn\x0");

    uuid_s = uuid_step.toSPF();

    TEST_ASSERT(uuid_s == "'3fO4772Iv9CYc5SOFbUgyn'");
    std::cout << uuid_s << " length : " << uuid_s.length() << std::endl;

    uuid_qt = QString("3fO4772Iv9CYc5SOFbUgyn\x0");

    uuid_step = Step::String(uuid_qt.toStdString());
    uuid_s = uuid_step.toSPF();

    TEST_ASSERT(uuid_s == "'3fO4772Iv9CYc5SOFbUgyn'");
    std::cout << uuid_s << " length : " << uuid_s.length() << std::endl;

    std::cout << std::endl << "Failure : " << failure_results << " Success : " << success_results << std::endl;

    return failure_results;
}
