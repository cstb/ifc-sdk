// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#include <ifc2x3/SPFReader.h>
#include <ifc2x3/SPFWriter.h>
#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcProject.h>
#include <ifc2x3/IfcLocalPlacement.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>

#include <Step/CallBack.h>

#include <iostream>

class ConsoleCallBack : public Step::CallBack
{
public:
    ConsoleCallBack() : _max(1) {}
    virtual void setMaximum(size_t max) { _max = max; }
    virtual void setProgress(size_t progress) { std::cerr << double(progress)/double(_max)*100.0 << "%" << std::endl; }
protected:
    size_t _max;
};


int main(int argc, char **argv)
{
    std::cout << "Simple read/write example of Ifc2x3 SDK" << std::endl;

    if (argc < 2)
    {
        std::cout << "no ifc file to read in command line ." << std::endl;
        return 1;
    }

    // if a 4th parameter is present (anything), ifc file will be read in one char array block in memory
    bool inMemory = argc < 4;

    // stream to read and parse
    std::ifstream ifcFile;

    // try to open given file, return on error
    ifcFile.open(argv[1], std::ios_base::in);
    if (!ifcFile.is_open())
    {
        std::cout << "ERROR: failed to open <" << argv[1] << ">" << std::endl;
        return 1;
    }

    // read a binary spf cache if exists or write it if doens't
    std::string SPFDataCache(std::string(argv[1])+".spfdata");

    ifc2x3::SPFReader reader;
    ConsoleCallBack cb;
    //reader.setCallBack(&cb);

    // do we need to really load and parse ifc file
    bool mustReadIfcFile;

    // spf data cache stream to read (or write)
    std::ifstream cacheStream;

    // try to open it
    cacheStream.open(SPFDataCache.c_str(), std::ios_base::in | std::ios_base::binary);
    if (cacheStream.is_open())
    {
        std::cout << "Reading spf data cache file " << SPFDataCache << std::endl;
        mustReadIfcFile = !reader.readBin(cacheStream);
        std::cout << "Done" << std::endl;

        if (mustReadIfcFile)
        {
            std::cerr << "ERROR: failed to correctly read spf data cache file <" << SPFDataCache << ">" << std::endl;
        }
    }
    else
    {
        mustReadIfcFile = true;
        std::cout << "Failed to open spf data cache file <" << SPFDataCache << ">" << std::endl;
    }

    // either spf data cache doesn't exist or an error occured reading it, so we really read ifc file
    if (mustReadIfcFile)
    {
        std::cout << "Reading file" << argv[1] << std::endl;
        // get length of file
        ifcFile.seekg (0, ifcFile.end);
        std::ifstream::pos_type length = ifcFile.tellg();
        ifcFile.seekg (0, ifcFile.beg);

        // read ifc file in one block in memory
        if (reader.read(ifcFile, inMemory ? length : (std::ifstream::pos_type)0))
        {
            std::cout << "Done" << std::endl;
        }
        else
        {
            std::cerr << "Ho no, there is a PROBLEM!!" << std::endl;
            std::vector<std::string> errors = reader.errors();
            std::vector<std::string>::iterator it = errors.begin();
            while(it != errors.end())
            {
                std::cerr << *it << std::endl;
                ++it;
            }

            return 1;
        }
    }

    //get the express data set
    ifc2x3::ExpressDataSet * expressDataSet = dynamic_cast<ifc2x3::ExpressDataSet*>(reader.getExpressDataSet());

    if (expressDataSet == NULL)
    {
        std::cerr << "Ho no ... there is no ExpressDataSet." << std::endl;
        return (2);
    }

    // if we have to read ifc file, we can now try to generate a spf data cache file
    if (mustReadIfcFile)
    {
        ifc2x3::SPFWriter writer(expressDataSet);
        std::ofstream filestream;
        filestream.open(SPFDataCache.c_str(), std::ios_base::out | std::ios_base::binary);
        if (filestream.is_open())
        {
            std::cout << "Writing spf data cache file " << SPFDataCache << std::endl;
            if (!writer.writeBin(filestream))
            {
               std::cerr << "ERROR: failed to correctly write spf data cache file <" << SPFDataCache << ">" << std::endl;
            }
            else
                std::cout << "Done" << std::endl;
        }
        else
        {
            std::cerr << "ERROR: failed to create spf data cache file <" << SPFDataCache << ">" << std::endl;
        }
    }
    std::cout << "Instanciate all" << std::endl;
    expressDataSet->instantiateAll();
    std::cout << "Done" << std::endl;

    // ** Check the root of the model
    Step::RefLinkedList< ifc2x3::IfcProject > projects = expressDataSet->getAllIfcProject();
    if ( projects.size() == 0 ) {
        std::cout << "Strange ... there is no IfcProject" << std::endl;
    } else if ( projects.size() > 1 ) {
        std::cout << "Strange ... there more than one IfcProject" << std::endl;
    } else {
        Step::RefPtr< ifc2x3::IfcProject > project = &*(projects.begin());
        std::cout << "Project name is: " << project->getName().toISO_8859(Step::String::Western_European) << std::endl;
        if ( Step::isUnset(project->getLongName().toISO_8859(Step::String::Western_European) ) ) {
            project->setLongName("Je lui donne le nom que je veux");
        }
        std::cout << "Project long name is: " << project->getLongName().toISO_8859(Step::String::Western_European)  << std::endl;
    }

/*
    // ** Write the file
    ifc2x3::SPFWriter writer(expressDataSet);
    //writer.setCallBack(&cb);
    std::ofstream filestream;
    std::string outputFilename = argc<3 ? argv[2] : "saved.ifc";
    filestream.open(outputFilename.c_str(), std::ios_base::out);

    std::cout << "Writing file " << outputFilename << std::endl;
    bool status = writer.write(filestream);
    std::cout << "Done" << std::endl;
    return status;
*/
    return 1;
}
