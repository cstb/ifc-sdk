// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef Step_SPFHeader_h
#define Step_SPFHeader_h

#include <Step/Export.h>

#include <Step/SimpleTypes.h>
#include <Step/StepLogger.h>

#include <istream>
#include <vector>

namespace Step {
    /*!
     ** \short Defines the STEP-21 header
     */
    class STEP_EXPORT SPFHeader
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
         @param progress used to store the current progress of the parsing by the callback
         @return true if the header has no syntax error.
         */
        bool parse(std::istream& ifs, unsigned int& counter, size_t &progress, const std::vector<String> &schemaIdentifier);

        void setLogger(StepLogger *logger);


    private:
        FileDescription m_fileDescription;
        FileName m_fileName;
        FileSchema m_fileSchema;
        String m_otherFields;

        RefPtr<StepLogger> m_logger;

    };
}
#endif
