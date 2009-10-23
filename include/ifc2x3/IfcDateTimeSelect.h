#ifndef IFC2X3_IFCDATETIMESELECT_H
#define IFC2X3_IFCDATETIMESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCalendarDate;
    class IfcDateAndTime;
    class IfcLocalTime;

    /**
     * .
     * 
     */
    class IFC2X3_DLL_DEF IfcDateTimeSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcDateTimeSelect_select {
            IFCCALENDARDATE,
            IFCLOCALTIME,
            IFCDATEANDTIME,
            UNSET,
        };

        union IfcDateTimeSelect_union {
            IfcCalendarDate *m_IfcCalendarDate;
            IfcLocalTime *m_IfcLocalTime;
            IfcDateAndTime *m_IfcDateAndTime;
        };
        /**
         */
        IfcDateTimeSelect();
        virtual ~IfcDateTimeSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDateTimeSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcDateTimeSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcCalendarDate *getIfcCalendarDate() const;
        /**
         * @param value
         */
        void setIfcCalendarDate(IfcCalendarDate *value);
        /**
         */
        IfcLocalTime *getIfcLocalTime() const;
        /**
         * @param value
         */
        void setIfcLocalTime(IfcLocalTime *value);
        /**
         */
        IfcDateAndTime *getIfcDateAndTime() const;
        /**
         * @param value
         */
        void setIfcDateAndTime(IfcDateAndTime *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcDateTimeSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDateTimeSelect_select m_type;
        /**
         */
        IfcDateTimeSelect_union m_IfcDateTimeSelect_union;

    };

}

#endif // IFC2X3_IFCDATETIMESELECT_H
