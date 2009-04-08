#include <ifc2x3/SPFReader.h>
#include <ifc2x3/SPFWriter.h>
#include <ifc2x3/ExpressDataSet.h>
#include <ifc2x3/IfcProject.h>
#include <ifc2x3/IfcLocalPlacement.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>

#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "Simple read/write example of Ifc2x3 SDK" << std::endl;

   if (argc < 2)
   {
      std::cout << "no ifc file to read in command line ." << std::endl;
      return 1;
   }

   // ** open, load, close the file
   std::ifstream ifcFile;
   ifcFile.open(argv[1]);

   ifc2x3::SPFReader reader;

   if ( ifcFile.is_open() )
   {
       std::cout << "reading file ..." << std::endl;
   }
   else
   {
       std::cout << "ERROR: failed to open <" << argv[1] << ">" << std::endl;
       return 1;
   }
   bool result = reader.read(ifcFile);
   ifcFile.close();

   if (result)
      std::cout << "OK!!" << std::endl;
   else
   {
      std::cout << "Ho no, there is a PROBLEM!!" << std::endl;
      return 1;
   }

   // ** get the model
   ifc2x3::ExpressDataSet * expressDataSet = dynamic_cast<ifc2x3::ExpressDataSet*>(reader.getExpressDataSet());

   if (expressDataSet == NULL)
   {
      std::cout << "Ho no ... there is no ExpressDataSet." << std::endl;
      return (2);
   }

   // ** Instantiate the model
   expressDataSet->instantiateAll();

   // ** Check the root of the model
   Step::RefLinkedList< ifc2x3::IfcProject > projects = expressDataSet->getAllIfcProject();
   if ( projects.size() == 0 ) {
      std::cout << "Strange ... there is no IfcProject" << std::endl;
   } else if ( projects.size() > 1 ) {
      std::cout << "Strange ... there more than one IfcProject" << std::endl;
   } else {
      Step::RefPtr< ifc2x3::IfcProject > project = &*(projects.begin());
      std::cout << "Project name is: " << project->getName().toLatin1() << std::endl;
      if ( Step::isUnset(project->getLongName().toLatin1()) ) {
         project->setLongName("Je lui donne le nom que je veux");
      }
      std::cout << "Project long name is: " << project->getLongName().toLatin1() << std::endl;
   }

   // ** Write the file
   ifc2x3::SPFWriter writer(expressDataSet);
   if (argc==3)
   {
       return writer.writeSPF(argv[2]);
   }
   else
   {
       return writer.writeSPF("saved.ifc");
   }

   return 1;
}
