#include "BrepReaderVisitor.h"

#include <ifc2x3/ExpressDataSet.h>


BrepReaderVisitor::BrepReaderVisitor() :
    _shapeRep(0),
    _productRepresentation(false)
{
}

bool BrepReaderVisitor::visitIfcProduct(ifc2x3::IfcProduct *value)
{
    ifc2x3::IfcProductRepresentation * pr = value->getRepresentation();

    if ((pr == NULL) || (pr->getRepresentations().empty()))
    {
        return (false);
    }
    else
    {
        _product = value;
        pr->acceptVisitor(this);
    }

    return true;
}

bool BrepReaderVisitor::visitIfcProductRepresentation(ifc2x3::IfcProductRepresentation *value)
{
    ifc2x3::List_IfcRepresentation_1_n::iterator it, end = value->getRepresentations().end();

    bool result = false;

    Step::String identifiers[4] = { "Body", "IAI", "Facetation", "Unset" };

    for (int i = 0; i < 4 ; ++i)
    {
        for (it = value->getRepresentations().begin(); it != end; ++it)
        {
            mRepresentationIdentifier = (*it)->getRepresentationIdentifier();
            mRepresentationType = (*it)->getRepresentationType();
            if (mRepresentationIdentifier == identifiers[i] )
            {
                if (mRepresentationType != Step::String("Brep") )
                {
                    // TODO
                }
            }
        }
    }

    return result;
}


bool BrepReaderVisitor::visitIfcRepresentation(ifc2x3::IfcRepresentation *value)
{
    ifc2x3::Set_IfcRepresentationItem_1_n::iterator it,end;
    it = value->getItems().begin();
    end = value->getItems().end();

    while (it!=end)
    {
        (*it)->acceptVisitor(this);
        ++it;
    }

    return true;
}
//
//struct GenerateIfcFacetedBrep
//{
//
//    GenerateIfcFacetedBrep(){}
//
//    void setExpressDataSet(ifc2x3::ExpressDataSet *dataset)
//    {
//        _dataset = dataset;
//
//        _shell = _dataset->createIfcClosedShell().get();
//
//        _brep = _dataset->createIfcFacetedBrep().get();
//
//        _brep->setOuter(_shell);
//    }
//
//    ifc2x3::IfcFace *createFace(ifc2x3::IfcCartesianPoint *v1,
//                                ifc2x3::IfcCartesianPoint *v2,
//                                ifc2x3::IfcCartesianPoint *v3)
//    {
//        ifc2x3::IfcPolyLoop *loop = _dataset->createIfcPolyLoop().get();
//        loop->getPolygon().push_back(v1);
//        loop->getPolygon().push_back(v2);
//        loop->getPolygon().push_back(v3);
//
//        ifc2x3::IfcFaceOuterBound *fob = _dataset->createIfcFaceOuterBound().get();
//        fob->setBound(loop);
//        fob->setOrientation(Step::BTrue);
//
//        ifc2x3::IfcFace *face = _dataset->createIfcFace().get();
//        face->getBounds().insert(fob);
//
//        return face;
//    }
//
//    ifc2x3::IfcCartesianPoint *createPoint(const osg::Vec3 &v)
//    {
//        std::map<osg::Vec3,ifc2x3::IfcCartesianPoint *>::iterator it = _points.find(v);
//        if (it != _points.end())
//        {
//            return (*it).second;
//        }
//
//        ifc2x3::IfcCartesianPoint *point = _dataset->createIfcCartesianPoint().get();
//        ifc2x3::List_IfcLengthMeasure_1_3 coordinates;
//
//        coordinates.push_back(v.x());
//        coordinates.push_back(v.y());
//        coordinates.push_back(v.z());
//
//        point->setCoordinates(coordinates);
//
//        _points[v] = point;
//
//        return point;
//    }
//
//    void operator() (const osg::Vec3 v1,
//                     const osg::Vec3 v2,
//                     const osg::Vec3 v3,
//                     bool /*treatVertexDataAsTemporary*/)
//    {
//        _shell->getCfsFaces().insert(createFace(createPoint(v1),
//                                                createPoint(v2),
//                                                createPoint(v3)));
//    }
//
//    std::map<osg::Vec3,ifc2x3::IfcCartesianPoint *> _points;
//
//    ifc2x3::ExpressDataSet *_dataset;
//    ifc2x3::IfcClosedShell *_shell;
//    ifc2x3::IfcFacetedBrep *_brep;
//};


bool BrepReaderVisitor::visitIfcMappedItem(ifc2x3::IfcMappedItem *value)
{
    if (!value->getMappingSource()->getMappedRepresentation()->acceptVisitor(this))
        return false;
    else
        return true;

}

bool BrepReaderVisitor::visitIfcRepresentationItem(ifc2x3::IfcRepresentationItem *value)
{

    if (_productRepresentation)
    {
        return true;
    }
}
