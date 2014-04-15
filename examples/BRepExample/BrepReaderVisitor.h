#ifndef BREPREADERVISITOR_H
#define BREPREADERVISITOR_H

#include <ifc2x3/InheritVisitor.h>

class BrepReaderVisitor : public ifc2x3::InheritVisitor
{
public:
    BrepReaderVisitor();

    virtual bool visitIfcProduct(ifc2x3::IfcProduct *value);
    virtual bool visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation *value);
    virtual bool visitIfcRepresentation(ifc2x3::IfcRepresentation *value);
    virtual bool visitIfcRepresentationItem(ifc2x3::IfcRepresentationItem *value);
    virtual bool visitIfcMappedItem(ifc2x3::IfcMappedItem *value);

protected:

    //! Representation type and identifier of the currently generated geometry
    Step::String mRepresentationType;
    Step::String mRepresentationIdentifier;
    ifc2x3::IfcProduct *_product;
    ifc2x3::IfcShapeRepresentation *_shapeRep;
    bool _productRepresentation;

};

#endif // BREPREADERVISITOR_H
