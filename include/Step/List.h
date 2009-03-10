/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
#ifndef STEP_LIST_H
#define STEP_LIST_H

#include "SimpleTypes.h"
#include <vector>
#include <algorithm>
#include <stdexcept>

#ifdef  _MSC_VER
#pragma warning(disable:4290)
#endif

namespace Step
{

    /*!
     ** \short C++ implementation of EXPRESS container 'LIST'
     ** see http://tools.openoffice.org/performance/aggregate_classes.html
     ** we are using STL vectors instead of lists to favorise sequential
     ** access.
     */

    template<typename T, Integer _lo=0, Integer _hi=-1> class List :
                public std::vector<T>, public Aggregate
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
                Aggregate(unset)
        {
        }

        /*!
        ** constructor based on a array of T
        */
        List(const T value[], Integer count) throw(std::range_error)
        {
            resize(count);
            for (Integer i=0; i<count; ++i)
                (*this)[i]=value[i];
        }

        /*!
        ** constructor based on a std::list of T
        */
        List(const std::list<T>& value) throw(std::range_error)
        {
            resize(value.size());
            std::copy(value.begin(), value.end(), this->begin());
        }

        //! destructor
        virtual ~List()
        {
        }

        virtual void resize(Integer newsize, const T& _val = getUnset(T())) throw(std::out_of_range)
        {
            setUnset(false);
            if (_hi>0)
                if (newsize>_hi)
                    throw std::range_error("resizing size bigger than size of List");
            std::vector<T>::resize(newsize, _val);
        }

        virtual iterator insert(iterator &it, const T& _val = getUnset(T()))
        {
            setUnset(false);
            return std::vector<T>::insert(it, _val);
        }

        virtual iterator erase(iterator &idx)
        {
            return std::vector<T>::erase(idx);
        }

        virtual iterator erase(const T &_val)
        {
            return std::vector<T>::erase(std::find(this->begin(), this->end(), _val));
        }

        virtual void insert(Integer idx, const T& _val = getUnset(T()))
#  ifdef _DEBUG
        throw( std::out_of_range)
        {
            checkRange(idx);
#       else
        {
#       endif

            setUnset(false);
            std::vector<T>::insert(this->begin()+idx,_val);
        }

        virtual T & at(Integer idx)
#       ifdef _DEBUG
        throw( std::out_of_range)
        {
            checkRange(idx);
#       else
        {
#       endif
            return std::vector<T>::at(idx);
        }

        virtual const T & at(Integer idx) const
#       ifdef _DEBUG
        throw( std::out_of_range)
        {
            checkRange(idx);
#       else
        {
#       endif
            return std::vector<T>::at(idx);
        }

        virtual T & operator[](Integer idx)
#       ifdef _DEBUG
        throw( std::out_of_range)
        {
            checkRange(idx);
#       else
        {
#       endif
            return std::vector<T>::operator[](idx);
        }

        virtual const T & operator[](Integer idx) const
#       ifdef _DEBUG
        throw( std::out_of_range)
        {
            checkRange(idx);
#       else
        {
#       endif
            return std::vector<T>::operator[](idx);
        }

        virtual void push_back(const T& _val) throw(std::out_of_range)
        {
            setUnset(false);
            if (_hi>0)
                if (std::vector<T>::size()== (typename std::vector<T>::size_type)_hi)
                    throw std::out_of_range("List is full");
            std::vector<T>::push_back(_val);
        }

        virtual iterator erase(Integer idx) throw(std::out_of_range)
        {
            checkRange(idx);
            return std::vector<T>::erase(this->begin()+idx);
        }

        virtual inline Integer getUpperBound()
        {
            if (_hi>0)
                return _hi;
            else
                return getUnset(_hi);
        }
        virtual inline Integer getLowerBound()
        {
            return _lo;
        }

        List& operator=(const List&other)
        {
            this->setUnset(other.isUnset());
            std::vector<T>::operator=(other);
            return *this;
        }

    protected:
        virtual inline void checkRange(Integer idx) const throw( std::out_of_range)
        {
            if (idx<0)
                throw std::out_of_range("index is negative");
            if (_hi>0)
                if (idx>=_hi)
                    throw std::out_of_range("index is over or equal to high index");
            if (idx>=Integer(std::vector<T>::size()))
                throw std::out_of_range("index is over size of aggregate");
        }
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
