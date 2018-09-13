#include <ifc2x3/SPFReader.h>


int main(int argc, char** argv)
{
    if(argc != 2)
    {
        std::cerr << "Parameter should be an ifc file." <<
                  std::endl;
        return 1;
    }

    // ** open, load, close the file
    std::ifstream ifcFile;
    ifcFile.open(argv[1]);

    ifc2x3::SPFReader reader;

    std::cout << "reading file ..." << std::endl;

    bool result = reader.read(ifcFile);

    ifcFile.close();

    if(result)
        std::cout << "OK!!" << std::endl;
    else
    {
        std::cerr << "Ho no, there are a PROBLEM!!" << std::endl;
        return 1;
    }

    return 0;
}