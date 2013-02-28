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
     ** \short C++ implementation of EXPRESS container 'SET'
     ** based on hash_set
     */

    template<typename T, Integer _lo = 0, Integer _hi = -1> class Set :
        public std::set<T>,
        public Aggregate
    {
    public:
        //! the size_type
        typedef typename std::set<T>::size_type size_type;
        //! the forward iterator
        typedef typename std::set<T>::iterator iterator;
        //! the const forward iterator
        typedef typename std::set<T>::const_iterator const_iterator;
        //! the reverse iterator
        typedef typename std::set<T>::reverse_iterator reverse_iterator;
        //! the const reverse iterator
        typedef typename std::set<T>::const_reverse_iterator const_reverse_iterator;

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
         * \throws std::range_error
         */
        Set(const T value[], Integer count) throw(std::range_error)
        {
            for (Integer i=0; i<count; ++i)
            insert(value[i]);

            if (Integer(std::set<T>::size())<_lo)
            {
                std::set<T>::clear();
                throw std::range_error("Set : array not big enough");
            }
            if (_hi>0)
            {
                if (Integer(std::set<T>::size())>=_hi)
                {
                    std::set<T>::clear();
                    throw std::range_error("Set size is not big enough for the array");
                }
            }
        }

        /**
         * constructor with initialization with a std::vector
         * \param value a list of values
         * \throws std::range_error
         */
        Set(const std::vector<T>& value) throw(std::range_error)
        {
            if (Integer(std::set<T>::size())<_lo)
            {
                std::set<T>::clear();
                throw std::range_error("Set : vector not big enough");
            }
            if (_hi>0)
            {
                if (Integer(std::set<T>::size())>=_hi)

                {
                    std::set<T>::clear();
                    throw std::range_error("Set size is not big enough for the vector");
                }
            }
            for (unsigned i=0;i<value.size();++i)
            {
                insert(value[i]);
            }
        }

#ifndef GLIBCXX_HAS_DEFECTS
        /**
         * constructor with initialization with a std::list
         * \param value a list of values
         * \throws std::range_error
         */
        Set(const std::list<T>& value) throw(std::range_error)
        {
            if (Integer(std::set<T>::size())<_lo)
            {
                std::set<T>::clear();
                throw std::range_error("Set : list not big enough");
            }
            if (_hi>0)
            {
                if (Integer(std::set<T>::size())>=_hi)
                {
                    std::set<T>::clear();
                    throw std::range_error("Set size is not big enough for the list");
                }
            }
            std::copy(value.begin(),value.end(),this->begin());
        }
#endif
        virtual ~Set()
        {
        }

        /**
         * The set container is extended by inserting a single new element
         * \param value value to insert
         * \throws std::range_error
         */
        virtual void insert(const T& value = getUnset(T())) throw(std::out_of_range)
        {
            setUnset(false);
            std::set<T>::insert(value);
            if (_hi>0)
            {
                if (Integer(std::set<T>::size())>_hi)
                {
                    std::set<T>::erase(value);
                    throw std::out_of_range("Set is full");
                }
            }
        }

        /**
         * erase a value at a given position
         * \param it where to erase
         */
        virtual void erase(iterator &it)
        {
            std::set<T>::erase(it);
        }

        /**
         * erase a value at a given position
         * \param value to erase.
         * \return the function returns the number of elements erased, which in set containers is 1 if an element with a value of x existed (and thus was subsequently erased), and zero otherwise.
         */
        virtual size_type erase(const T &value)
        {
            return std::set<T>::erase(value);
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
            std::set<T>::operator=(other);
            return *this;
        }
    private:
        // cannot allow to have an operator that will allow different sizes of Set to be assigned
        std::set<T>& operator=(const std::set<T>& other);
    };

    // UNSET for SET
    template<typename T, Integer _lo, Integer _hi> inline Set<T,_lo,_hi> &getUnset(Set<T,_lo,_hi>)
    {
        static Set<T,_lo,_hi> unset(true);
        return unset;
    }
}

#endif
