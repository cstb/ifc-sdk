#pragma once

#include <ifc2x3/InheritVisitor.h>

class SimpleVisitor : public ifc2x3::InheritVisitor
{
    std::string _message{ "Not implemented" };

public:
    //! Constructor
    SimpleVisitor();

    bool visitIfcProduct(ifc2x3::IfcProduct* value) override;
    bool visitIfcWallStandardCase(ifc2x3::IfcWallStandardCase* value) override;

    std::string getMessage() const;
    void resetMessage();
};
