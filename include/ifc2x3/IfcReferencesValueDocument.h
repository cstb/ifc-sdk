/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#ifndef IFC2X3_IFCREFERENCESVALUEDOCUMENT_H
#define IFC2X3_IFCREFERENCESVALUEDOCUMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <stdexcept>
#include <Step/Referenced.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class IfcAppliedValue;
    class IfcReferencesValueDocument;

    /**
     */
    class Inverted_IfcReferencesValueDocument_ReferencingValues_type : public Set_IfcAppliedValue_1_n {
    public:
        /**
         */
        typedef Set_IfcAppliedValue_1_n::size_type size_type;

        /**
         */
        IfcReferencesValueDocument *mOwner;
        /**
         */
        Inverted_IfcReferencesValueDocument_ReferencingValues_type();
        /**
         * @param owner
         */
        void setOwner(IfcReferencesValueDocument *owner);
        /**
         * @param value
         */
        virtual void insert(const Step::RefPtr< IfcAppliedValue > &value) throw(std::out_of_range);
        /**
         * @param value
         */
        virtual size_type erase(const Step::RefPtr< IfcAppliedValue > &value);

    };

    class CopyOp;
    class IfcDocumentSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcReferencesValueDocument : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'ReferencedDocument'.
         * 
         */
        virtual IfcDocumentSelect *getReferencedDocument();
        /**
         * (const) Returns the value of the explicit attribute 'ReferencedDocument'.
         * 
         * @return the value of the explicit attribute 'ReferencedDocument'
         */
        virtual const IfcDocumentSelect *getReferencedDocument() const;
        /**
         * Sets the value of the explicit attribute 'ReferencedDocument'.
         * 
         * @param value
         */
        virtual void setReferencedDocument(const Step::RefPtr< IfcDocumentSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ReferencingValues'.
         * 
         */
        virtual Set_IfcAppliedValue_1_n &getReferencingValues();
        /**
         * (const) Returns the value of the explicit attribute 'ReferencingValues'.
         * 
         * @return the value of the explicit attribute 'ReferencingValues'
         */
        virtual const Set_IfcAppliedValue_1_n &getReferencingValues() const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcReferencesValueDocument(Step::Id id, Step::SPFData *args);
        virtual ~IfcReferencesValueDocument();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcReferencesValueDocument &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDocumentSelect > m_referencedDocument;
        /**
         */
        Inverted_IfcReferencesValueDocument_ReferencingValues_type m_referencingValues;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;

    };

}

#endif // IFC2X3_IFCREFERENCESVALUEDOCUMENT_H
