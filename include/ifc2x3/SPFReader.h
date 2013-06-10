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

#ifndef IFC2X3_SPFREADER_H
#define IFC2X3_SPFREADER_H
#include <ifc2x3/Export.h>

#include <Step/BaseSPFReader.h>
#include <iostream>
#include <map>
#include <string>

namespace ifc2x3 {

    /**
     * This is the specific SPF reader fot the generated schema.
     * 
     * It constructs a specific ExpressDataSet from a SPF stream.
     * It is used by calling the read method.
     * 
     */
    class IFC2X3_EXPORT SPFReader : public Step::BaseSPFReader {
    public:
        /**
         */
        SPFReader();
        /**
         * This is the method to call to parse a SPF stream and create an ExpressDataSet.
         * 
         * It constructs a specific ExpressDataSet from a SPF stream.
         * 
         * @param ifs The input stream to read from
         * @param inputSize the size of the stream to read from if available, used for the callback
         * @return Success.
         */
        virtual bool read(std::istream &ifs, size_t inputSize = 0);

    protected:
        /**
         * Map to find load method from ENTITY name.
         * 
         */
        std::map< std::string, bool (SPFReader::*)(bool b) > m_Str2LoadFn;
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTOCONTROL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPARAMETERIZEDPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTUBEBUNDLETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOMPLEXPROPERTY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLOCALPLACEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACESTYLERENDERING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELNESTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSHAPEREPRESENTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISCRETEACCESSORYTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYBOUNDEDVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBEAMTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDINGELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREINFORCEMENTDEFINITIONPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONNECTEDFACESET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPACEHEATERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONNECTIONPOINTGEOMETRY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOOLEANRESULT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSWEPTDISKSOLID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSUBEDGE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDPOINTMARKERSYMBOL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACESTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTUREDDIMENSIONCALLOUT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPACETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROJECTORDER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONDENSERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCHEATEXCHANGERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADSINGLEFORCEWARPING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFASTENER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOPENSHELL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOFFSETCURVE2D(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBEAM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROXY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPERSON(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALCURVEMEMBER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOXEDHALFSPACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCQUANTITYAREA(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEXTENDEDMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOPTICALMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRAINT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSLIPPAGECONNECTIONCONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYENUMERATEDVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSELEMENTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOUTLETTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTIMESERIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCIRREGULARTIMESERIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALPOINTREACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCONEDIRECTIONREPEATFACTOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRODUCT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCADDRESS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRESENTATIONLAYERASSIGNMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSIUNIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFEATUREELEMENTADDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCRANERAILASHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFILTERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLINEARDIMENSION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWATERPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTYPEPRODUCT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEQUIPMENTELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCIRREGULARTIMESERIESVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVALVETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCROOF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREINFORCINGBAR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRESENTATIONSTYLEASSIGNMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCOVERSBLDGELEMENTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREINFORCINGELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCACTUATORTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSERVICELIFE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVECTOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCALARMTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCARBITRARYPROFILEDEFWITHVOIDS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOCUMENTINFORMATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSYMBOLSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRIBPLATEPROFILEPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWINDOW(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCROUNDEDEDGEFEATURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALCURVECONNECTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLINE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPACETHERMALLOADPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAXIS2PLACEMENT2D(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYCONSTRAINTRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTIMESERIESREFERENCERELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPOLYGONALBOUNDEDHALFSPACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTYLEDITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDRAUGHTINGCALLOUT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOFFSETCURVE3D(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTUREVERTEX(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELSPACEBOUNDARY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTSOURCEPOSITIONAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDATEANDTIME(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTASK(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFAILURECONNECTIONCONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDTERMINATORSYMBOL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOSTITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOLUMN(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWORKPLAN(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFURNITURETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYDEPENDENCYRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOORLININGPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTASKS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELAGGREGATES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELEMENTASSEMBLY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPIXELTEXTURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTUREMAP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACEOFREVOLUTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPATIALSTRUCTUREELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCQUANTITYWEIGHT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADLINEARFORCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTSOURCEGONIOMETRIC(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCZONE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCASYMMETRICISHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTSOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRADIUSDIMENSION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCENTERLINEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDRAUGHTINGCALLOUTRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMECHANICALMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCHAMFEREDGEFEATURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCUNITARYEQUIPMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDAMPERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELOCCUPIESSPACES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCNAMEDUNIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCLASSIFICATIONITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCINVENTORY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTORESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPATH(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTENDONANCHOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDSYMBOL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGRIDPLACEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURVESTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRESENTATIONSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOCUMENTINFORMATIONRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGEOMETRICCURVESET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSWITHECCENTRICITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEXTERNALLYDEFINEDTEXTFONT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVERTEXBASEDTEXTUREMAP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCIRCLEHOLLOWPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLINEARACTIONVARYING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDINGELEMENTPROXY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICTIMECONTROLTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEXTERNALLYDEFINEDSURFACESTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCACTOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEDGECURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICFLOWSTORAGEDEVICETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTRANSPORTELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMANIFOLDSOLIDBREP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESCONSTRAINT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCQUANTITYCOUNT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOBJECTPLACEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEXTERNALREFERENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTSTYLETEXTMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVIBRATIONISOLATORTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONVERSIONBASEDUNIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREGULARTIMESERIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIMENSIONALEXPONENTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESLIBRARY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTYPEOBJECT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOSTSCHEDULE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSUBCONTRACTRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELSEQUENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSYSTEMFURNITUREELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCALENDARDATE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOAD(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCHYGROSCOPICMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTSHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWTERMINALTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCHALFSPACESOLID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIALLIST(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESMATERIAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFEATUREELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWINDOWPANELPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMAPPEDITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTLITERAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTDISTRIBUTIONDATA(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTWODIRECTIONREPEATFACTOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESAPPROVAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRAILINGTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPOINTONSURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTENDON(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELDECOMPOSES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCENERGYPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCIMAGETEXTURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFILLAREASTYLEHATCHING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDRAUGHTINGPREDEFINEDCOLOUR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOBJECTDEFINITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROJECTIONELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROJECTORDERRECORD(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIMENSIONCURVEDIRECTEDCALLOUT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOORPANELPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVERTEX(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTRANSPORTELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURVESTYLEFONTPATTERN(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPHERE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACETEXTURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALPOINTACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRECTANGLEHOLLOWPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTELECOMADDRESS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBEZIERCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFACESURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSCHEDULETIMECONTROL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTSOURCEAMBIENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROJECT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWSTORAGEDEVICETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDUCTSILENCERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCIRCLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTURECOORDINATEGENERATOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONTEXTDEPENDENTUNIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRECTANGULARPYRAMID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGEOMETRICREPRESENTATIONSUBCONTEXT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMECHANICALSTEELMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIBRARYREFERENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICHEATERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWASTETERMINALTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOCCUPANT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONFILLAREA(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWCONTROLLER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPERMIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRUCTIONMATERIALRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCARTESIANTRANSFORMATIONOPERATOR3D(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELEMENTCOMPONENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYSET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVERTEXLOOP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCARTESIANTRANSFORMATIONOPERATOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDARYNODECONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRAILING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPHYSICALSIMPLEQUANTITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDERIVEDUNIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROFILEPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCHILLERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDINGSTOREY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTERMINATORSYMBOL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWTREATMENTDEVICE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWORKCONTROL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDARYEDGECONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONCONTROLELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFANTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCORIENTEDEDGE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEXTERNALLYDEFINEDHATCHSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDTEXTFONT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELREFERENCEDINSPATIALSTRUCTURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELSCHEDULESCOSTITEMS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWALL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOMPOSITEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMECHANICALFASTENERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTANKTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOPENINGELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALSTEELPROFILEPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRAMPFLIGHT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOSTVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALSURFACECONNECTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADSINGLEDISPLACEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFILLAREASTYLETILESYMBOLWITHSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTOPOLOGYREPRESENTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCARBITRARYOPENPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONOCCURRENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCACTORROLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWALLTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLINEARACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSHELLBASEDSURFACEMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLSHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTFIXTURETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMECHANICALFASTENER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOVERING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSWEPTSURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURTAINWALLTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSERVICELIFEFACTOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLAMPTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCIRCLEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBSPLINECURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSECTIONPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPLACEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREINFORCEMENTBARPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREPRESENTATIONITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDDIMENSIONSYMBOL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMOTORCONNECTIONTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONDITIONCRITERION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRESENTATIONLAYERWITHSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWSTORAGEDEVICE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYREFERENCEVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGRIDAXIS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMEMBER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROTECTIVEDEVICETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIALLAYERSETUSAGE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONFILLAREAOCCURRENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDINGELEMENTPROXYTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONFLOWELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURVESTYLEFONTANDSCALING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCARTESIANTRANSFORMATIONOPERATOR3DNONUNIFORM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELFLOWCONTROLELEMENTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTIMESERIESSCHEDULE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYENUMERATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIALLAYERSET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCORGANIZATIONRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAIRTERMINALTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAPPLIEDVALUERELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONIC(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMETRIC(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELLIPSE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTHERMALMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWMOVINGDEVICE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOVERINGTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELLIPSEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALANALYSISMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCENERGYCONVERSIONDEVICETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADGROUP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREPRESENTATIONMAP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACEOFLINEAREXTRUSION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCABLECARRIERSEGMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONTROLLERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOMPOSITECURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWINDOWLININGPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURVEBOUNDEDPLANE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAPPROVALRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFUELPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPERFORMANCEHISTORY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONCHAMBERELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDRAUGHTINGPREDEFINEDCURVEFONT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREPRESENTATIONCONTEXT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURTAINWALL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOORDINATEDUNIVERSALTIMEOFFSET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTOGROUP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVERTEXPOINT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELAXATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGRID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCLOSEDSHELL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSWITHREALIZINGELEMENTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLABORRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFURNISHINGELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANGULARDIMENSION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGENERALMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPOINTONCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPERMEABLECOVERINGPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFACETEDBREP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCQUANTITYLENGTH(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCABLECARRIERFITTINGTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCISHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEVAPORATORTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALACTIVITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADTEMPERATURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFEATUREELEMENTSUBTRACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONCURVEOCCURRENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFURNISHINGELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGEOMETRICREPRESENTATIONITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGROUP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTSOURCEDIRECTIONAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMEMBERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCLASSIFICATIONNOTATIONFACET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREINFORCINGMESH(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPHYSICALCOMPLEXQUANTITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWSEGMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBLOCK(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIMENSIONCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTAIR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESPROFILEPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTSTYLEWITHBOXCHARACTERISTICS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCSHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWCONTROLLERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCOVERSSPACES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRODUCTDEFINITIONSHAPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRAINTRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALPROFILEPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRUCTIONPRODUCTRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELDEFINESBYTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELDEFINESBYPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSOUNDVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRIGHTCIRCULARCYLINDER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROCEDURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAPPLICATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSLAB(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCARBITRARYCLOSEDPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIALDEFINITIONREPRESENTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCENERGYCONVERSIONDEVICE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWORKSCHEDULE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYDEFINITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRODUCTSOFCOMBUSTIONPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSWITCHINGDEVICETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCLASSIFICATIONREFERENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICAPPLIANCETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSWEPTAREASOLID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRECTANGULARTRIMMEDSURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCQUANTITYVOLUME(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICGENERATORTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSYSTEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPERSONANDORGANIZATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALMEMBER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONNECTIONSURFACEGEOMETRY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTYLEMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWMOVINGDEVICETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRUCTIONEQUIPMENTRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDARYNODECONDITIONWARPING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALCONNECTIONCONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVIRTUALGRIDINTERSECTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTYLEDREPRESENTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONTROL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCACTIONREQUEST(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACESTYLEWITHTEXTURES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPLANARBOX(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMOVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAPPROVALPROPERTYRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTABLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTOACTOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREFERENCESVALUEDOCUMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOORSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADSINGLEFORCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCQUANTITYTIME(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCRANERAILFSHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALPLANARACTIONVARYING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTRANSFORMERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTIMESERIESVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDUCTFITTINGTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPLATETYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPORT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOBJECT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOOLINGTOWERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONSURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDINGELEMENTCOMPONENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWMETERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFURNITURESTANDARD(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOMPRESSORTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFILLAREASTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDERIVEDUNITELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALCONNECTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOBJECTIVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPLANE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCREWRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICALCIRCUIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELEMENTCOMPONENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONTEXTOCCURRENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALREACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSOUNDPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDERIVEDPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPOLYLOOP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDUCTSEGMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAPPROVAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREPRESENTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAPPROVALACTORRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPIPEFITTINGTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTRAPEZIUMPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCREVOLVEDAREASOLID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEDGELOOP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTRIMMEDCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSPORTTOELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALSURFACEMEMBERVARYING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPRODUCTREPRESENTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIMENSIONCURVETERMINATOR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCROOT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYLISTVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOCUMENTREFERENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLUIDFLOWPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEXTERNALLYDEFINEDSYMBOL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCORDERACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELOVERRIDESPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTACKTERMINALTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPOINT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDCOLOUR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCLASSIFICATIONITEMRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFACEBASEDSURFACEMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONNECTIONPORTGEOMETRY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFOOTING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPATIALSTRUCTUREELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIMENSIONPAIR(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELSERVICESBUILDINGS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICALBASEPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRECTANGLEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTOPROJECTORDER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPIPESEGMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGEOMETRICSET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSPACEPROGRAM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCUSHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOOLEDBEAMTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIALCLASSIFICATIONRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELEMENTQUANTITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCLASSIFICATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTOPROCESS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROJECTIONCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGEOMETRICREPRESENTATIONCONTEXT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTINTENSITYDISTRIBUTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIRECTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISCRETEACCESSORY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPUMPTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDOCUMENTELECTRONICFORMAT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSIMPLEPROPERTY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYSINGLEVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNSTOPRODUCT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALPLANARACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOLOURSPECIFICATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCENVIRONMENTALIMPACTVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCZSHAPEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCOWNERHISTORY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFACETEDBREPWITHVOIDS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFILLAREASTYLETILES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDARYFACECONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCHUMIDIFIERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSITE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONSYMBOLOCCURRENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPLATE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEDGEFEATURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALRESULTGROUP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSPATHELEMENTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCSGSOLID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWFITTING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWINSTRUMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICDISTRIBUTIONPOINT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTOPOLOGICALREPRESENTATIONITEM(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEXTRUDEDAREASOLID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAXIS2PLACEMENT3D(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYSETDEFINITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSECTIONREINFORCEMENTPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSECTIONEDSPINE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALSURFACEMEMBER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURVESTYLEFONT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSSTRUCTURALELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCABLESEGMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLOOP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESDOCUMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPLANAREXTENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRUCTIONRESOURCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSHAPEMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWFITTINGTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPHYSICALQUANTITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDEDCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDINGELEMENTPART(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRATIONALBEZIERCURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACECURVESWEPTAREASOLID(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOOLEANCLIPPINGRESULT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCVIRTUALELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTURECOORDINATE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCASSET(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCLASSIFICATIONNOTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDINGBOX(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFASTENERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSSTRUCTURALACTIVITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICMOTORTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELINTERACTIONREQUIREMENTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSHAPEASPECT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELDEFINES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAIRTOAIRHEATRECOVERYTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADPLANARFORCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONCHAMBERELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRAINTCLASSIFICATIONRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAXIS1PLACEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCJUNCTIONBOXTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONNECTIONCURVEGEOMETRY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALPOINTCONNECTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAPPLIEDVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWSEGMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSIGNS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROCESS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOILERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELPROJECTSELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTLITERALWITHEXTENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBUILDINGELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACESTYLEREFRACTION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSPORTS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCURRENCYRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIBRARYINFORMATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCARTESIANTRANSFORMATIONOPERATOR2D(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCAIRTERMINALBOXTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIAMETERDIMENSION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOLOURRGB(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOMPOSITECURVESEGMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDRAUGHTINGPREDEFINEDTEXTFONT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBLOBTEXTURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACESTYLESHADING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONSTRAINTAGGREGATIONRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTABLEROW(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTSTYLEFORDEFINEDFONT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWTERMINAL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSANITARYTERMINALTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRIGHTCIRCULARCONE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSENSORTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONCONTROLELEMENTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRAMPFLIGHTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEVAPORATIVECOOLERTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLOCALTIME(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGENERALPROFILEPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCLIGHTSOURCESPOT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFC2DCOMPOSITECURVE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEQUIPMENTSTANDARD(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALCURVEMEMBERVARYING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONNECTSSTRUCTURALMEMBER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSLABTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCSGPRIMITIVE3D(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPREDEFINEDCURVEFONT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONNECTIONGEOMETRY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTAIRFLIGHTTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCEDGE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCGASTERMINALTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSURFACESTYLELIGHTING(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOILTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPROPERTYTABLEVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCORGANIZATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMATERIALLAYER(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDEDSURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONFLOWELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELFILLSELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWALLSTANDARDCASE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSOLIDMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDEFINEDSYMBOL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMONETARYUNIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCOLUMNTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELCONTAINEDINSPATIALSTRUCTURE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFIRESUPPRESSIONTERMINALTYPE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESAPPLIEDVALUE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELASSOCIATESCLASSIFICATION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCARTESIANPOINT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTAIRFLIGHT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELECTRICALELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCTEXTSTYLEFONTMODEL(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMEASUREWITHUNIT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRAMP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCBOUNDARYCONDITION(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCELEMENTARYSURFACE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDISTRIBUTIONPORT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCROUNDEDRECTANGLEPROFILEDEF(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCMECHANICALCONCRETEMATERIALPROPERTIES(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCUNITASSIGNMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCDIMENSIONCALLOUTRELATIONSHIP(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFACEOUTERBOUND(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPILE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCCONNECTIONPOINTECCENTRICITY(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPOSTALADDRESS(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCANNOTATIONSURFACEOCCURRENCE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFACEBOUND(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCWINDOWSTYLE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCRELVOIDSELEMENT(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCSTRUCTURALLOADSTATIC(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCPOLYLINE(bool isFirst);
        /**
         * @param isFirst
         */
        bool loadIFCFLOWTREATMENTDEVICETYPE(bool isFirst);
        /**
         * @param s
         */
        bool callLoadFunction(const std::string &s);

    };

}

#endif // IFC2X3_SPFREADER_H
