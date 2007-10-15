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

#ifndef IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
#define IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include "ifc2x3/IfcPhysicalQuantity.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcPhysicalComplexQuantity : public IfcPhysicalQuantity {
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
        Step::Set< Step::RefPtr< IfcPhysicalQuantity > > &getHasQuantities();
        /**
         */
        IfcLabel getDiscrimination();
        /**
         * Sets the value of the explicit attribute 'Discrimination'.
         * 
         * @param value
         */
        void setDiscrimination(const IfcLabel &value);
        /**
         */
        IfcLabel getQuality();
        /**
         * Sets the value of the explicit attribute 'Quality'.
         * 
         * @param value
         */
        void setQuality(const IfcLabel &value);
        /**
         */
        IfcLabel getUsage();
        /**
         * Sets the value of the explicit attribute 'Usage'.
         * 
         * @param value
         */
        void setUsage(const IfcLabel &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_HasQuantities_type : public Step::Set< Step::RefPtr< IfcPhysicalQuantity > > {
        public:
            /**
             */
            IfcPhysicalComplexQuantity *mOwner;
            /**
             */
            Inverted_HasQuantities_type();
            /**
             * @param owner
             */
            void setOwner(IfcPhysicalComplexQuantity *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcPhysicalQuantity > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcPhysicalComplexQuantity(Step::Id id, Step::SPFData *args);
        virtual ~IfcPhysicalComplexQuantity();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Inverted_HasQuantities_type m_hasQuantities;
        /**
         */
        std::string m_discrimination;
        /**
         */
        std::string m_quality;
        /**
         */
        std::string m_usage;

    };

}

#endif // IFC2X3_IFCPHYSICALCOMPLEXQUANTITY_H
