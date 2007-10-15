/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
#define IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCartesianPoint;
    class IfcTextureVertex;

    /**
     */
    class IFC2X3_DLL_DEF IfcVertexBasedTextureMap : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        Step::List< Step::RefPtr< IfcTextureVertex > > &getTextureVertices();
        /**
         * Sets the value of the explicit attribute 'TextureVertices'.
         * 
         * @param value
         */
        void setTextureVertices(const Step::List< Step::RefPtr< IfcTextureVertex > > &value);
        /**
         */
        Step::List< Step::RefPtr< IfcCartesianPoint > > &getTexturePoints();
        /**
         * Sets the value of the explicit attribute 'TexturePoints'.
         * 
         * @param value
         */
        void setTexturePoints(const Step::List< Step::RefPtr< IfcCartesianPoint > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcVertexBasedTextureMap(Step::Id id, Step::SPFData *args);
        virtual ~IfcVertexBasedTextureMap();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcVertexBasedTextureMap &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::List< Step::RefPtr< IfcTextureVertex > > m_textureVertices;
        /**
         */
        Step::List< Step::RefPtr< IfcCartesianPoint > > m_texturePoints;

    };

}

#endif // IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
