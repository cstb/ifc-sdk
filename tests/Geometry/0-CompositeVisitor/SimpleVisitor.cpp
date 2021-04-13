#include "SimpleVisitor.h"

SimpleVisitor::SimpleVisitor() :
    ifc2x3::InheritVisitor()
{

}

bool SimpleVisitor::visitIfcProduct(ifc2x3::IfcProduct* value)
{
    _message = "SimpleVisitor not implemented for class " + value->type();
    return false;
}

bool SimpleVisitor::visitIfcWallStandardCase(ifc2x3::IfcWallStandardCase* value)
{
    _message = "Implemented";
    return true;
}

std::string SimpleVisitor::getMessage() const
{
    return _message;
}

void SimpleVisitor::resetMessage()
{
    _message = "Not implemented";
}
