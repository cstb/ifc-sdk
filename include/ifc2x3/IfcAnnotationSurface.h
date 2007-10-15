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

#ifndef IFC2X3_IFCANNOTATIONSURFACE_H
#define IFC2X3_IFCANNOTATIONSURFACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTextureCoordinate;

    /**
     */
    class IFC2X3_DLL_DEF IfcAnnotationSurface : public IfcGeometricRepresentationItem {
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
        IfcGeometricRepresentationItem *getItem();
        /**
         * Sets the value of the explicit attribute 'Item'.
         * 
         * @param value
         */
        void setItem(const Step::RefPtr< IfcGeometricRepresentationItem > &value);
        /**
         */
        IfcTextureCoordinate *getTextureCoordinates();
        /**
         * Sets the value of the explicit attribute 'TextureCoordinates'.
         * 
         * @param value
         */
        void setTextureCoordinates(const Step::RefPtr< IfcTextureCoordinate > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAnnotationSurface(Step::Id id, Step::SPFData *args);
        virtual ~IfcAnnotationSurface();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAnnotationSurface &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcGeometricRepresentationItem > m_item;
        /**
         */
        Step::RefPtr< IfcTextureCoordinate > m_textureCoordinates;

    };

}

#endif // IFC2X3_IFCANNOTATIONSURFACE_H
