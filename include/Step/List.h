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

#ifndef Step_List_h
#define Step_List_h

#include <Step/Aggregation.h>

#include <vector>
#include <algorithm>
#include <stdexcept>

#ifdef  _MSC_VER
#pragma warning(disable:4290)
#endif

namespace Step {

    /*!
     * \short C++ implementation of EXPRESS container 'LIST'
     * see http://tools.openoffice.org/performance/aggregate_classes.html
     * we are using STL vectors instead of lists thanks to its sequential
     * access.
     */

    template<typename T, Integer _lo = 0, Integer _hi = -1> class List:
        public std::vector<T>, Aggregation<T, _lo, _hi>
    {
    protected:

    public:
        //! the forward iterator
        typedef typename std::vector<T>::iterator iterator;
        //! the const forward iterator
        typedef typename std::vector<T>::const_iterator const_iterator;
        //! the reverse iterator
        typedef typename std::vector<T>::reverse_iterator reverse_iterator;
        //! the const reverse iterator
        typedef typename std::vector<T>::const_reverse_iterator const_reverse_iterator;

        //! default constructor
        List(bool unset=false) :
            m_unset(unset)
        {
        }

        /**
         * constructor with initialization with an array
         * \param value an array of values
         * \param count the number of elements to insert from the array in value
#ifdef STEP_CHECK_RANGE
         * \throws std::range_error
#endif
         */
        List(const T value[], Integer count)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
            resize(count);
            for (Integer i=0; i<count; ++i)
                (*this)[i]=value[i];
        }

        /**
         * constructor with initialization with a std::list
         * \param value a list of values
#ifdef STEP_CHECK_RANGE
         * \throws std::range_error
#endif
         */
        List(const std::list<T>& value)
#ifdef STEP_CHECK_RANGE
        throw(std::range_error)
#endif
        {
            resize(value.size());
            std::copy(value.begin(), value.end(), this->begin());
        }

        //! destructor
        virtual ~List()
        {
        }

        /**
         * resize a List with a value or unset if not given
         * \param newsize size to resize to
         * \param value value to fill in if the new size if greater
#ifdef STEP_CHECK_RANGE
         * \throws std::out_of_range
#endif
         */
        virtual void resize(Integer newsize, const T& value = getUnset(T()))
#ifdef STEP_CHECK_RANGE
        throw(std::out_of_range)
#endif
        {
            setUnset(false);
#ifdef STEP_CHECK_RANGE
            if (_hi>0) {
                if (newsize>_hi)
                {
                    throw std::range_error("resizing size bigger than size of List");
                }
            }
#endif
            std::vector<T>::resize((size_t)newsize, value);
        }

        /**
         * insert a value at a given position
         * \param idx where to insert
         * \param value value to insert
         */
        virtual iterator insert(iterator &idx, const T& value = getUnset(T()))
        {
            setUnset(false);
            return std::vector<T>::insert(idx, value);
        }

        /**
         * erase a value at a given position
         * \param idx where to erase
         * \return A bidirectional iterator pointing to the new location of the element that followed the  element erased by the function call, which is the list end if the operation erased the last element in the sequence.
         */

        virtual iterator erase(iterator &idx)
        {
            return std::vector<T>::erase(idx);
        }

        /**
        * erase a value at a given position
        * \param value to erase.
        * The methods looks for a matching element in the List and removes it
        * \return A bidirectional iterator pointing to the new location of the element that followed the  element erased by the function call, which is the list end if the operation erased the last element in the sequence.
        */
        virtual iterator erase(const T &value)
        {
            return std::vector<T>::erase(std::find(this->begin(), this->end(), value));
        }

        /**
         * insert a value at a given position
         * \param position where to insert
         * \param value to insert.
         */
        virtual void insert(Integer position, const T& value = getUnset(T()))
#ifdef STEP_CHECK_RANGE
        throw( std::out_of_range)
        {
            checkRange(position);
#       else
        {
#       endif
            setUnset(false);
            std::vector<T>::insert(this->begin()+position,value);
        }

        /**
         * get the element at a given position
         * \param position where to get value
         * \return the element at the given position
         */
        virtual T & at(Integer position)
#ifdef STEP_CHECK_RANGE
        throw( std::out_of_range)
        {
            checkRange(position);
#       else
        {
#       endif
            return std::vector<T>::at((size_t)position);
        }

        /**
         * get the element at a given position
         * \param position where to get value
         * \return the const element at the given position
         */
        virtual const T & at(Integer position) const
#ifdef STEP_CHECK_RANGE
        throw( std::out_of_range)
        {
            checkRange(position);
#       else
        {
#       endif
            return std::vector<T>::at((size_t)position);
        }

        /**
         * Returns a reference to the element at position n in the vector container.
         * \param position Position of an element in the List.
         * \return The element at the specified position in the vector.
         */
        virtual T & operator[](Integer position)
#ifdef STEP_CHECK_RANGE
        throw( std::out_of_range)
        {
            checkRange(position);
#       else
        {
#       endif
            return std::vector<T>::operator[]( size_t(position) ) ;
        }

        /**
         * Returns a reference to the element at position n in the vector container.
         * \param position Position of an element in the List.
         * \return The const element at the specified position in the vector.
         */
        virtual const T & operator[](Integer position) const
#ifdef STEP_CHECK_RANGE
        throw( std::out_of_range)
        {
            checkRange(position);
#       else
        {
#       endif
            return std::vector<T>::operator[]( size_t(position) );
        }

        /**
         * Adds a new element at the end of the List, after its current last element. The content of this new element is initialized to a copy of value.
         * \param value Value to be copied to the new element.
#ifdef STEP_CHECK_RANGE
         * \throws std::out_of_range
#endif
         */
        virtual void push_back(const T& value)
#ifdef STEP_CHECK_RANGE
        throw(std::out_of_range)
#endif
        {
            setUnset(false);

#ifdef STEP_CHECK_RANGE
            if (_hi>0)
                if (std::vector<T>::size()== (typename std::vector<T>::size_type)_hi)
                    throw std::out_of_range("List is full");
#endif
            std::vector<T>::push_back(value);
        }
        /**
         * Removes a single element (position) from the List container
         * \param position Position of an element in the List.
         * \return A random access iterator pointing to the new location of the element that followed the last element erased by the function call, which is the List end if the operation erased the last element in the sequence.
         */
        virtual iterator erase(Integer position)
#ifdef STEP_CHECK_RANGE
        throw(std::out_of_range)
#endif
        {
#ifdef STEP_CHECK_RANGE
            checkRange(position);
#endif
            return std::vector<T>::erase(this->begin()+position);
        }

        /**
         * get the upper bound of the List
         * \return the upper bound if set, getUnset() if not.
         */
        virtual inline Integer getUpperBound()
        {
            if (_hi>0)
                return _hi;
            else
                return getUnset(_hi);
        }

        /**
         * get the lower bound of the List
         * \return the lower bound if set.
         */
        virtual inline Integer getLowerBound()
        {
            return _lo;
        }

        /**
         * Assigns a copy of List other as the new content for the List object.
         * \param other A List object containing elements of the same type.
         * \return a reference to this List
         */
        List& operator=(const List& other)
        {
            this->setUnset(other.isUnset());
            std::vector<T>::operator=(other);
            return *this;
        }

        /*!
         \short Gets the 'unset' flag
         @return the 'unset' flag
         */
        bool isUnset() const
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

#ifdef STEP_CHECK_RANGE
        /**
         * checks if the position is within bounds
         * \param position position to check
         * \throws std::out_of_range
         */
        virtual inline void checkRange(Integer position) const
        throw(std::out_of_range)
        {
            if (position<0)
            {
                throw std::out_of_range("index is negative");
            }
            if (_hi>0)
            {
                if (position>=_hi)
                {
                    throw std::out_of_range("index is over or equal to high index");
                }
            }
            if (position>=Integer(std::vector<T>::size()))
            {
                throw std::out_of_range("index is over size of aggregate");
            }
        }
#endif

    private:
        // cannot allow to have an operator that will allow different sizes of List to be assigned
        std::vector<T>& operator=(const std::vector<T>& other);

    };

    //! return the UNSET value UNSET for LIST
    template<typename T, Integer _lo, Integer _hi> inline List<T,_lo,_hi> &getUnset(List<T,_lo,_hi>)
    {
        static List<T,_lo,_hi> unset(true);
        return unset;
    }

}

#endif
