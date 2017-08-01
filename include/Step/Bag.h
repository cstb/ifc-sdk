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

#ifndef Step_Bag_h
#define Step_Bag_h

#include <Step/Aggregation.h>

#include <set>
#include <stdexcept>

#ifdef  _MSC_VER
#pragma warning(disable:4290)
#endif

#ifdef __GNUC__
#  define GLIBCXX_HAS_DEFECTS 1
#endif

namespace Step {
    /*!
     ** \short C++ implementation of EXPRESS container 'BAG'
     ** based on multiset
     */

    template<typename T, Integer _lo = 0, Integer _hi = -1> class Bag:
     public std::multiset<T>, Aggregation<T, _lo,_hi>
    {
    public:

        /**
         * iterators definitions
         * \{
         */
        typedef typename std::multiset<T>::iterator iterator;
        typedef typename std::multiset<T>::const_iterator const_iterator;
        typedef typename std::multiset<T>::reverse_iterator reverse_iterator;
        typedef typename std::multiset<T>::const_reverse_iterator
        const_reverse_iterator;
        /// \}

        /// default constructor not unset by default
        Bag(bool unset=false) :
            m_unset(unset)
        {
        }

        /**
         * constructor with initialization with an array
         * \param value an array of values
         * \param count the number of elements to insert from the array in value
#ifdef STEP_CHECK_RANGE
         * \throws std::range_error
         */
        Bag(const T value[], Integer count)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
#ifdef STEP_CHECK_RANGE
            if (count<_lo)
                throw std::range_error("Bag : array not big enough");
            if (_hi>0)
                if (count>=_hi)
                    throw std::range_error("Bag size is not big enough for the array");

#endif
            for (Integer i=0; i<count; ++i)
                insert(value[i]);
        }
        /**
         * constructor with initialization with a std::vector
         * \param value a vector of values
#ifdef STEP_CHECK_RANGE
         * \throws std::range_error
         */
        Bag(const std::vector<T>& value)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
#ifdef STEP_CHECK_RANGE
            if (Integer(value.size())<_lo)
                throw std::range_error("Bag : vector not big enough");
            if (_hi>0)
                if (Integer(value.size())>=_hi)
                    throw std::range_error("Bag size is not big enough for the vector");
#endif

            for (unsigned i=0;i<value.size();++i)
                insert(value[i]);
        }

#ifndef GLIBCXX_HAS_DEFECTS
        /**
         * constructor with initialization with a std::list
         * \param value a list of values
#ifdef STEP_CHECK_RANGE
         * \throws std::range_error
#endif
         */
        Bag(const std::list<T>& value)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
#ifdef STEP_CHECK_RANGE
            if (Integer(value.size())<_lo)
                throw std::range_error("Bag : list not big enough");
            if (_hi>0)
                if (Integer(value.size())>=_hi)
                    throw std::range_error("Bag size is not big enough for the list");

#endif
            std::copy(value.begin(),value.end(),this->begin());
        }
#endif
        /**
         * destructor
         */
        ~Bag() override
        {
        }

        /**
         * inserts a value into the Bag
         * \param value the value to insert
#ifdef STEP_CHECK_RANGE
         * \throws std::out_of_range
#endif
         */
        virtual void insert(const T& value = getUnset(T()))
#ifdef STEP_CHECK_RANGE
        throw( std::out_of_range)
#endif
        {
#ifdef STEP_CHECK_RANGE
            if (_hi>0)
            {
                if (Integer(std::multiset<T>::size())==_hi)
                {
                    throw std::out_of_range("Bag is full");
                }
            }

#endif
            std::multiset<T>::insert(value);
            setUnset(false);
        }

        /**
         * erases a item at the iterator position
         * \param position where to erase from
         */
        virtual void erase(iterator &position)
        {
            std::multiset<T>::erase(position);
        }

        /**
         * erases a valuefrom the Bag
         * \param value the value to erase
         */
        virtual void erase(const T &value)
        {
            std::multiset<T>::erase(value);
        }

        /**
         * return the upper bound
         */
        virtual inline Integer getUpperBound()
        {
            if (_hi>0)
            {
                return _hi;
            }
            else
            {
                return getUnset(_hi);
            }
        }

        /**
         * return the lower bound
         */
        virtual inline Integer getLowerBound()
        {
            return _lo;
        }

        /**
         * Assignment operator
         * \param other the Bag to copy
         */
        void operator=(const Bag<T,_lo,_hi>&other)
        {
            this->setUnset(other.isUnset());
            std::multiset<T>::operator=(other);
        }
                /*!
         \short Gets the 'unset' flag
         @return the 'unset' flag
         */
        bool isUnset() const override
        {
            return m_unset;
        }

        /*!
         \short Sets the 'unset' flag
         @param b the 'unset' flag
         */
        void setUnset(bool b)
        {
            m_unset = b;
        }

        /*!
         \short Toggle the 'unset' flag
         @return The new state of the 'unset' flag
         */
        bool toggleUnset()
        {
            m_unset = !m_unset;
            return m_unset;
        }

    protected:
        //! store if the unset status
        bool m_unset;
    private:
        //! this is since we cannot allow to have an operator that will allow different sizes of List to be assigned
        std::multiset<T>& operator=(const std::multiset<T>& other);

    };

    // UNSET for BAG
    template<typename T,Integer _lo, Integer _hi> inline Bag<T,_lo,_hi>& getUnset(Bag<T,_lo,_hi>)
    {
        static Bag<T,_lo,_hi> unset(true);
        return unset;
    }
}

#endif
