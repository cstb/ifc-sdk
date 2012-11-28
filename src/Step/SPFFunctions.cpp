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

#include "Step/SPFFunctions.h"
#include "Step/BaseExpressDataSet.h"
#include "Step/ASCII_codes.h"

#include "Step/logger.h"


using namespace Step;
using namespace std;

Id Step::getIdParam(const std::string& s)
{
    if (s[0] == DollarSign ) {
        return Id_UNSET;
    }

    Id res = atoi(s.substr(1,s.length() - 1).c_str());
    if (res==0)
        return Id_UNDEF;
    else
        return res;
}

bool Step::getIdListParam(const std::string& s, std::vector<Id>& res)
{
    res.clear();
    if ( s[0] == DollarSign ) {
        res.push_back(Id_UNSET);
        return true;
    }

    std::vector<std::string> resStr;
    if (!parseList(s.substr(1,s.length() - 2).c_str(), resStr)) {
        res.push_back(Id_UNDEF);
        return false;
    }

    else {
        for (unsigned int i=0; i< resStr.size();i++) {
            Id current = atoi(resStr[i].c_str() + 1);
            if (current ==0) {
                res.push_back(Id_UNDEF);
                return false;
            }
            res.push_back(current);
        }
        if (res.empty())
            res.push_back(Id_UNSET);
        return true;
    }
}

bool Step::getSubParameter(std::string& arg, std::string& str1)
{
    str1.clear();
    if (arg.length()<3 || arg[0] != '(' || arg[arg.length()-1]!=')')
        return false;
    else {
        std::string::size_type i = 0;
        unsigned int from = 1;
        int bracket =0;
        for (i = 1 ;i < arg.length()-1; i++) {
            if (arg[i] == Apostrophe ) {
                i = arg.find(Apostrophe,i+1);
                if (i == std::string::npos) {
                    return false;
                }
            } else if (arg[i] == LeftParenthesis) {
                bracket++;
            } else if (arg[i] == RightParenthesis) {
                if (--bracket<0) {
                    return false;
                }
            } else if (arg[i] == Comma && bracket == 0) {
                str1 = arg.substr(from,i-from);
                arg.replace(from,i,"");
                return true;
            }
        }
        str1 = arg.substr(1,arg.length()-2);
        arg = "()";
        return true;
    }
}

bool Step::parseList(const char* s, std::vector<std::string>& res) {
    res.clear();
    std::string str(s);

    std::string::size_type i = 0;
    unsigned int from = 0;
    int bracket =0;
    for (i = 0;i < str.length(); i++) {
        if (str[i] == Apostrophe) {
            i = str.find(Apostrophe,i+1);
            if (i == std::string::npos) {
                return false;
            }
        } else if (str[i] == LeftParenthesis) {
            bracket++;
        } else if (str[i] == RightParenthesis) {
            if (--bracket<0) {
                return false;
            }
        }
        else if (str[i] == Comma && bracket == 0) {
            res.push_back(str.substr(from,i-from));
            from = i + 1;
        }
    }
    if (from<i)
        res.push_back(str.substr(from,i-from));
    if (bracket>0) {
        return false;
    }
    return true;
}

bool Step::getLine(std::istream& ifs, unsigned int& counter, char* s, unsigned long bufferLength, std::string &str) {
    str.clear();
    unsigned long i = 0;
    unsigned long from = 0;
    ifs.get(s[0]);
    for (;s[i] != Semicolon && i < bufferLength-1;ifs.get(s[++i])) {
        if (s[i]>=0 && s[i] <= 32) {
            if (s[i] == Newline) //END OF LINE
                counter++;
            str = str + std::string(&s[from], i-from);
            from = i+1;
        } else if (s[i] == Slash ) { // char -> / For comment parsing
            for (ifs.get(s[++i]) ; i < bufferLength-1;ifs.get(s[++i])) { // Remove duplicate '/'
                if (s[i] != Slash)
                    break;
            }
            if (s[i] == Asterix) { // char -> *
                str = str + std::string(&s[from], i-from-1);
                for (ifs.get(s[++i]) ; i < bufferLength-1;ifs.get(s[++i])) {
                    if (s[i] == Asterix) {
                        for ( ifs.get(s[++i]); i < bufferLength-1;ifs.get(s[++i])) { // Remove duplicate '*'
                            if (s[i] != Asterix)
                                break;
                        }
                        if (s[i] == Slash) {
                            from = i+1;
                            break;
                        }
                    }
                }
                if (i >= bufferLength) {
                    std::cerr <<("Malformed string, comments not ended by */ ");
                    return false;
                }
            }
        } else if (s[i] == Apostrophe) { // char -> '
            ifs.get(s[++i]);
            for (;s[i] != Apostrophe && i < bufferLength-1;ifs.get(s[++i])) {
                if (s[i]>=0 && s[i] < 32) {
                    if (s[i] == Newline) //END OF LINE
                        counter++;
                    str = str + std::string(&s[from], i-from);
                    from = i;
                }
            }
            if (i >= bufferLength) {
                std::cerr <<("Malformed string, odd number of \" ' \" ");
                return false;
            }
        }
    }
    if (i >= bufferLength) {
        std::cerr <<("String too long ");
        return false;
    }
    if (from < i)
        str = str + std::string(&s[from], i-from);
    return true;
}

bool Step::removeQuotes(std::string& s) {
    if (s[0]!=Apostrophe || s[s.length()-1]!=Apostrophe)
        return false;
    else {
        s = s.substr(1,s.length()-2);
        return true;
    }
}

