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

#include "BrepBuilder.h"
#include "BrepReaderVisitor.h"

class ConsoleCallBack : public Step::CallBack
{
public:
    ConsoleCallBack() : _max(1) {}
    void setMaximum(size_t max) override { _max = max; }
    void setProgress(size_t progress) override { std::cerr << double(progress)/double(_max)*100.0 << "%" << std::endl; }
    bool stop() const override {return false;}

protected:
    size_t _max;
};


int main(int argc, char **argv)
{
    std::cout << "Simple read Brep geometry example of Ifc2x3 SDK" << std::endl;

    if (argc < 2)
    {
        std::cout << "no ifc file to read in command line ." << std::endl;
        return 1;
    }

    bool inMemory = true;
    if (argc < 4)
    {
        inMemory = false;
    }

    // ** open, load, close the file
    std::ifstream ifcFile;
    ifcFile.open(argv[1]);

    ifc2x3::SPFReader reader;
    ConsoleCallBack cb;
    reader.setCallBack(&cb);

    if ( ifcFile.is_open() )
    {
        std::cout << "reading file ..." << std::endl;
    }
    else
    {
        std::cout << "ERROR: failed to open <" << argv[1] << ">" << std::endl;
        return 1;
    }

    // get length of file
    ifcFile.seekg (0, ifcFile.end);
    std::ifstream::pos_type length = ifcFile.tellg();
    ifcFile.seekg (0, ifcFile.beg);

    bool result = reader.read(ifcFile, inMemory ? length : (std::ifstream::pos_type)0);
    ifcFile.close();

    if (result)
        std::cout << "OK!!" << std::endl;
    else
    {
        std::cout << "Ho no, there is a PROBLEM!!" << std::endl;
        std::vector<std::string> errors = reader.errors();
        std::vector<std::string>::iterator it = errors.begin();
        while(it != errors.end())
        {
            std::cout << *it << std::endl;
            ++it;
        }

        return 1;
    }

    // ** get the model
    ifc2x3::ExpressDataSet * expressDataSet = dynamic_cast<ifc2x3::ExpressDataSet*>(reader.getExpressDataSet());

    if (expressDataSet == nullptr)
    {
        std::cout << "Ho no ... there is no ExpressDataSet." << std::endl;
        return (2);
    }

    // ** Get buildingElement
	BRepBuilder brepBuilder;
	BrepReaderVisitor visitor(&brepBuilder);

    Step::RefLinkedList< ifc2x3::IfcProject >::iterator projIt = expressDataSet->getAllIfcProject().begin();
    for (; projIt != expressDataSet->getAllIfcProject().end(); ++projIt)
    {
        projIt->acceptVisitor(&visitor);
    }

    return 0;
}
