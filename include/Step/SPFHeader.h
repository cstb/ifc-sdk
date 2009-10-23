#ifndef Step_SPFHeader_h
#define Step_SPFHeader_h

#include "StepDLL.h"

#include "SimpleTypes.h"

#include <istream>
#include <vector>

namespace Step {
    /*!
     ** \short Defines the STEP-21 header
     */
    class STEP_DLL_DEF SPFHeader
    {
    public:
        /*!
         ** \short Mapping of STEP-21 file_description
         */
        struct FileDescription
        {
            //! storage of the description strings
            std::vector<String> description;
            //! storage of the implementation level string
            String implementationLevel;
        };

        /*!
         \short Mapping of STEP-21 file_name
         */
        struct FileName
        {
            //! storage of the name string
            String name;
            //! storage of the timeStamp string
            String timeStamp;
            //! storage of the author strings
            std::vector<String> author;
            //! storage of the organization strings
            std::vector<String> organization;
            //! storage of the preprocessor version string
            String preprocessorVersion;
            //! storage of the originating system string
            String originatingSystem;
            //! storage of the authorization string
            String authorization;
        };

        /*!
         \short Mapping of STEP-21 file_schema
         */
        struct FileSchema
        {
            //! list of schema identifiers
            std::vector<String> schemaIdentifiers;
        };

        /*!
         \short Default constructor
         */
        SPFHeader();

        /*!
         \short Destructor.
         */
        virtual ~SPFHeader();

        /*!
         \short Gets the file description structure from the header
         @return the file description structure from the header
         */
        FileDescription& getFileDescription();

        /*!
         \short Gets the file name structure from the header
         @return the file name structure from the header
         */
        FileName& getFileName();

        /*!
         \short Gets the file schema structure from the header
         @return the file schema structure from the header
         */
        FileSchema& getFileSchema();

        /*!
         \short Gets other optional fields from the header
         @return other optional fields from the header
         */
        String& getOtherFields();

        /*!
         \short Parse an input stream to extract the header
         @param ifs the input stream. Its position will be set at the end of the header section
         @param counter an integer for line counting. This method updates the counter
         @return true if the header has no syntax error.
         */
        bool parse(std::istream& ifs, unsigned int& counter);

    private:
        FileDescription m_fileDescription;
        FileName m_fileName;
        FileSchema m_fileSchema;
        String m_otherFields;
    };
}
#endif
