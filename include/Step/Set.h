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
#ifndef STEP_SET_H
#define STEP_SET_H

#include "SimpleTypes.h"
#include <set>
#include <stdexcept>

#ifdef  _MSC_VER
#pragma warning(disable:4290)
#endif

#ifdef __GNUC__
#  define GLIBCXX_HAS_DEFECTS 1
#endif

namespace Step
{
    /*!
    ** \short C++ implementation of EXPRESS container 'SET'
    ** based on hash_set
    */

    template<typename T, Integer _lo=0, Integer _hi=-1> class Set :
                public std::set<T>, public Aggregate
    {
    public:

    	typedef typename std::set<T>::size_type size_type;
        typedef typename std::set<T>::iterator iterator;
        typedef typename std::set<T>::const_iterator const_iterator;
        typedef typename std::set<T>::reverse_iterator reverse_iterator;
        typedef typename std::set<T>::const_reverse_iterator
        const_reverse_iterator;

        Set(bool unset=false) :
                Aggregate(unset)
        {
        }

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
                if (Integer(std::set<T>::size())>=_hi)
                {
                    std::set<T>::clear();
                    throw std::range_error("Set size is not big enough for the array");
                }
        }

        Set(const std::vector<T>& value) throw(std::range_error)
        {
            if (Integer(std::set<T>::size())<_lo)
            {
                std::set<T>::clear();
                throw std::range_error("Set : vector not big enough");
            }
            if (_hi>0)
                if (Integer(std::set<T>::size())>=_hi)
                {
                    std::set<T>::clear();
                    throw std::range_error("Set size is not big enough for the vector");
                }

            for (unsigned i=0;i<value.size();++i)
                insert(value[i]);
        }

#ifndef GLIBCXX_HAS_DEFECTS
        Set(const std::list<T>& value) throw(std::range_error)
        {
            if (Integer(std::set<T>::size())<_lo)
            {
                std::set<T>::clear();
                throw std::range_error("Set : list not big enough");
            }
            if (_hi>0)
                if (Integer(std::set<T>::size())>=_hi)
                {
                    std::set<T>::clear();
                    throw std::range_error("Set size is not big enough for the list");
                }

            std::copy(value.begin(),value.end(),this->begin());
        }
#endif
        virtual ~Set()
        {
        }

        virtual void insert(const T& _val = getUnset(T())) throw(std::out_of_range)
        {
            setUnset(false);
            std::set<T>::insert(_val);
            if (_hi>0)
                if (Integer(std::set<T>::size())>_hi)
                {
                    std::set<T>::erase(_val);
                    throw std::out_of_range("Set is full");
                }
        }

        virtual void erase(iterator &it)
        {
            std::set<T>::erase(it);
        }

        virtual size_type erase(const T &value)
        {
            return std::set<T>::erase(value);
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
