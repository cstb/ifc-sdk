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

#ifndef Step_Set_h
#define Step_Set_h

#include <Step/SimpleTypes.h>

#if 1
#include <boost/unordered_set.hpp>
#define STEP_SET boost::unordered_set
#else
#include <set>
#define STEP_SET std::set
#endif

#include <stdexcept>

#ifdef  _MSC_VER
#pragma warning(disable:4290)
#endif

#ifdef __GNUC__
#  define GLIBCXX_HAS_DEFECTS 1
#endif

namespace Step {
    /*!
     ** \short C++ implementation of EXPRESS container 'SET'
     ** based on hash_set
     */

    template<typename T, Integer _lo = 0, Integer _hi = -1> class Set :
            public STEP_SET<T>,
            public Aggregate
    {
    public:
        //! the size_type
        typedef typename STEP_SET<T>::size_type size_type;
        //! the forward iterator
        typedef typename STEP_SET<T>::iterator iterator;
        //! the const forward iterator
        typedef typename STEP_SET<T>::const_iterator const_iterator;
#if 0
        //! the reverse iterator
        typedef typename STEP_SET<T>::reverse_iterator reverse_iterator;
        //! the const reverse iterator
        typedef typename STEP_SET<T>::const_reverse_iterator const_reverse_iterator;
#endif
        /**
         * Default constructor
         * \param unset initialized to not unset by default
         */
        Set(bool unset=false) : Aggregate(unset)
        {
        }

        /**
         * constructor with initialization with an array
         * \param value an array of values
         * \param count the number of elements to insert from the array in value
##ifdef STEP_CHECK_RANGE
         * \throws std::range_error
#endif
         */
        Set(const T value[], Integer count)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
            for (Integer i=0; i<count; ++i)
                insert(value[i]);
#ifdef STEP_CHECK_RANGE
            if (Integer(STEP_SET<T>::size())<_lo)
            {
                STEP_SET<T>::clear();
                throw std::range_error("Set : array not big enough");
            }
            if (_hi>0)
            {
                if (Integer(STEP_SET<T>::size())>=_hi)
                {
                    STEP_SET<T>::clear();
                    throw std::range_error("Set size is not big enough for the array");
                }
            }
#endif
        }

        /**
         * constructor with initialization with a std::vector
         * \param value a list of values
##ifdef STEP_CHECK_RANGE
         * \throws std::range_error
#endif
         */
        Set(const std::vector<T>& value)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
#ifdef STEP_CHECK_RANGE
            if (Integer(STEP_SET<T>::size())<_lo)
            {
                STEP_SET<T>::clear();
                throw std::range_error("Set : vector not big enough");
            }
            if (_hi>0)
            {
                if (Integer(STEP_SET<T>::size())>=_hi)

                {
                    STEP_SET<T>::clear();
                    throw std::range_error("Set size is not big enough for the vector");
                }
            }
#endif
            for (unsigned i=0;i<value.size();++i)
            {
                insert(value[i]);
            }
        }

#ifndef GLIBCXX_HAS_DEFECTS
        /**
         * constructor with initialization with a std::list
         * \param value a list of values
#ifdef STEP_CHECK_RANGE
         * \throws std::range_error
#endif
         */
        Set(const std::list<T>& value)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
#ifdef STEP_CHECK_RANGE
            if (Integer(STEP_SET<T>::size())<_lo)
            {
                STEP_SET<T>::clear();
                throw std::range_error("Set : list not big enough");
            }
            if (_hi>0)
            {
                if (Integer(STEP_SET<T>::size())>=_hi)
                {
                    STEP_SET<T>::clear();
                    throw std::range_error("Set size is not big enough for the list");
                }
            }
#endif
            std::copy(value.begin(),value.end(),this->begin());
        }
#endif
        virtual ~Set()
        {
        }

        /**
         * The set container is extended by inserting a single new element
         * \param value value to insert
##ifdef STEP_CHECK_RANGE
         * \throws std::out_of_range
#endif
         */
        virtual void insert(const T& value = getUnset(T()))
#ifdef STEP_CHECK_RANGE
        throw(std::out_of_range)
#endif
        {
            setUnset(false);
            STEP_SET<T>::insert(value);
#ifdef STEP_CHECK_RANGE
            if (_hi>0)
            {
                if (Integer(STEP_SET<T>::size())>_hi)
                {
                    STEP_SET<T>::erase(value);
                    throw std::out_of_range("Set is full");
                }
            }
#endif
        }

        /**
         * erase a value at a given position
         * \param it where to erase
         */
        virtual void erase(iterator &it)
        {
            STEP_SET<T>::erase(it);
        }

        /**
         * erase a value at a given position
         * \param value to erase.
         * \return the function returns the number of elements erased, which in set containers is 1 if an element with a value of x existed (and thus was subsequently erased), and zero otherwise.
         */
        virtual size_type erase(const T &value)
        {
            return STEP_SET<T>::erase(value);
        }

        /**
         * get the upper bound of the Set
         * \return the upper bound if set, getUnset() if not.
         */
        virtual inline Integer getUpperBound()
        {
            if (_hi>0)
            {
                return _hi;
            }
            else {
                return getUnset(_hi);
            }
        }

        /**
         * get the lower bound of the List
         * \return the lower bound.
         */
        virtual inline Integer getLowerBound()
        {
            return _lo;
        }

        /**
         * Assigns a copy of Set other as the new content for the Set object.
         * \param other A Set object containing elements of the same type.
         * \return a reference to this Set
         */
        Set& operator=(const Set& other)
        {
            this->setUnset(other.isUnset());
            STEP_SET<T>::operator=(other);
            return *this;
        }
    private:
        // cannot allow to have an operator that will allow different sizes of Set to be assigned
        STEP_SET<T>& operator=(const STEP_SET<T>& other);
    };

    // UNSET for SET
    template<typename T, Integer _lo, Integer _hi> inline Set<T,_lo,_hi> &getUnset(Set<T,_lo,_hi>)
    {
        static Set<T,_lo,_hi> unset(true);
        return unset;
    }
}

#endif
