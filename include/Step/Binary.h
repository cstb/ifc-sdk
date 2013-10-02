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

#ifndef Step_Binary_h
#define Step_Binary_h

#include <bitset>
#include <string>

namespace Step {
    /*!
     * \short C++ Implementation of the EXPRESS Binary type
     */
    template<unsigned N> class Binary: public std::bitset<N>
    {

    public:

        Binary()
        {
            m_width = N;
            m_n = !(m_width % 4) ?
                        0 : !((m_width + 1) % 4) ?
                            1 : !((m_width + 2) % 4) ?
                                2 : 3;
            m_k = m_n + m_width;
            m_unset = true;
#ifdef __GNUG__
            std::bitset<N>::reset();
#else
            reset();
#endif
        }

        /*!
         * copy constructor
         * \param b binary to copy
         */
        Binary(const Binary<N>& b) :
            m_width(b.m_width), m_k(b.m_k),
            m_n(b.m_n), m_unset(b.m_unset)
        {
        }

        /*!
         * helper method to construct a binary from a SPF string representation
         * \param s the string to parse
         */
        void from_spfstring(const std::string &s)
        {
            unsigned i, idx;

            m_width = N;
            m_n = !(m_width % 4) ? 0 : !((m_width + 1) % 4) ? 1 : !((m_width
                                                                     + 2) % 4) ? 2 : 3;
            m_k = m_n + m_width;

#ifdef __GNUG__
            std::bitset<N>::reset();
#else
            reset();
#endif
            if (s.length() == 1)
            {
                m_unset = true;
            }
            else
            {
                m_unset = false;
                // No check done...
                int t;
                t = s[1] < 58 ? s[1] - 48 : s[1] - 55;

                switch (m_n)
                {
                case 0:
                    if (t & 8)
                        this->set(0);
                    if (t & 4)
                        this->set(1);
                    if (t & 2)
                        this->set(2);
                    if (t & 1)
                        this->set(3);
                    break;
                case 1:
                    if (t & 4)
                        this->set(0);
                    if (t & 2)
                        this->set(1);
                    if (t & 1)
                        this->set(2);
                    break;
                case 2:
                    if (t & 2)
                        this->set(0);
                    if (t & 1)
                        this->set(1);
                    break;
                case 3:
                    if (t & 1)
                        this->set(0);
                    break;
                }
                for (i = 4 - m_n, idx = 2; i < m_width; i += 4, idx++)
                {
                    t = s[idx] < 58 ? s[idx] - 48 : s[idx] - 55;
                    if (t & 8)
                        this->set(i);
                    if (t & 4)
                        this->set(i + 1);
                    if (t & 2)
                        this->set(i + 2);
                    if (t & 1)
                        this->set(i + 3);
                }
            }
        }

        /*!
          * helper method to produce a SPF string representation of a binary
          * \return the string in SPF representation
          */
        std::string &to_spfstring() const
        {
            unsigned i, idx;
            char *t;
            std::string *s;
            if (m_unset)
            {
                s = new std::string("0");
                return *s;
            }
#ifdef __GNUG__
# define TEST std::bitset<N>::test
#else
# define TEST test
#endif
            t = new char[m_k / 4 + 1 + 1]; // +1 for trailing 0
            t[1] = 0;
            switch (m_n)
            {
            case 0:
                if (TEST(0))
                    t[1] += 8;
                if (TEST(1))
                    t[1] += 4;
                if (TEST(2))
                    t[1] += 2;
                if (TEST(3))
                    t[1] += 1;
                break;
            case 1:
                if (TEST(0))
                    t[1] += 4;
                if (TEST(1))
                    t[1] += 2;
                if (TEST(2))
                    t[1] += 1;
                break;
            case 2:
                if (TEST(0))
                    t[1] += 2;
                if (TEST(1))
                    t[1] += 1;
                break;
            case 3:
                if (TEST(0))
                    t[1] += 1;
                break;
            }

            // Divide the sequence in into groups of 4 bits
            for (i = 4 - m_n, idx = 2; i < m_width; i += 4, idx++)
            {
                t[idx] = 0;
                if (TEST(i))
                    t[idx] += 8;
                if (TEST(i + 1))
                    t[idx] += 4;
                if (TEST(i + 2))
                    t[idx] += 2;
                if (TEST(i + 3))
                    t[idx] += 1;
            }

#undef TEST
            // Precede the sequence with the 4bit representation of m_n
            t[0] = (char)m_n;

            // If the decimal value of a 4-bit group is <= 9 add 48
            // else add 55 to create the 8bit char.
            for (i = 0; i < (m_k / 4 + 1); i++)
            {
                t[i] = t[i] <= 9 ? t[i] + 48 : t[i] + 55;
            }

            // set trailing char to 0 to end string
            t[m_k / 4 + 1] = 0;
            s = new std::string(t);
            delete t;
            return *s;
        }

        /*!
         * Number of bits the binary holds
         * \return the width of the binary
         */
        unsigned width() const
        {
            return m_width;
        }

        /*!
         * unset status
         * \return the unset status
         */
        bool is_unset() const
        {
            return m_unset;
        }

    protected:

    private:
        unsigned m_k;
        unsigned m_n;
        unsigned m_width;
        bool m_unset;
    };

}
#endif
// BINARY_H
