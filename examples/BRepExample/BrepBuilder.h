#ifndef BRepBuilder_H
#define BRepBuilder_H

#include <ifc2x3/all.h>

class BRepBuilder
{
public:
	BRepBuilder(){}
	virtual ~BRepBuilder() {}

	virtual void pushPlacement(ifc2x3::IfcAxis2Placement3D *value)
	{
		std::cout << "pushPlacement : " << value->getKey() << std::endl;
	}

	virtual void popPlacement()
	{
		std::cout << "popPlacement" << std::endl;
	}

	virtual void addObject(ifc2x3::IfcObjectDefinition *value)
	{
		std::cout << "addObject : " << value->getKey() << std::endl;
	}

	virtual void addRepresentation(ifc2x3::IfcRepresentationItem *value)
	{
		std::cout << "addRepresentation : " << value->getKey() << std::endl;
	}

	virtual void addClosedShell(ifc2x3::IfcClosedShell *value)
	{
		std::cout << "addClosedShell : " << value->getKey() << std::endl;
	}

	virtual void addFace(ifc2x3::IfcFace *value)
	{
		std::cout << "addFace : " << value->getKey() << std::endl;
	}

	virtual void addPoint(ifc2x3::IfcCartesianPoint *value)
	{
		std::cout << "addPoint : " << value->getKey() << std::endl;
	}

};

#endif // BRepBuilder_H