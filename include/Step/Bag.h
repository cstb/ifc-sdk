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
#ifndef STEP_BAG_H
#define STEP_BAG_H

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
    ** \short C++ implementation of EXPRESS container 'BAG'
    ** based on multiset
    */

    template<typename T, Integer _lo=0, Integer _hi=-1> class Bag :
                public std::multiset<T>, public Aggregate
    {
    public:

        typedef typename std::multiset<T>::iterator iterator;
        typedef typename std::multiset<T>::const_iterator const_iterator;
        typedef typename std::multiset<T>::reverse_iterator reverse_iterator;
        typedef typename std::multiset<T>::const_reverse_iterator
        const_reverse_iterator;

        Bag(bool unset=false) :
                Aggregate(unset)
        {
        }

        Bag(const T value[], Integer count) throw(std::range_error)
        {
            if (count<_lo)
                throw std::range_error("Bag : array not big enough");
            if (_hi>0)
                if (count>=_hi)
                    throw std::range_error("Bag size is not big enough for the array");

            for (Integer i=0; i<count; ++i)
                insert(value[i]);
        }

        Bag(const std::vector<T>& value) throw(std::range_error)
        {
            if (Integer(value.size())<_lo)
                throw std::range_error("Bag : vector not big enough");
            if (_hi>0)
                if (Integer(value.size())>=_hi)
                    throw std::range_error("Bag size is not big enough for the vector");

            for (unsigned i=0;i<value.size();++i)
                insert(value[i]);
        }

#ifndef GLIBCXX_HAS_DEFECTS
        Bag(const std::list<T>& value) throw(std::range_error)
        {
            if (Integer(value.size())<_lo)
                throw std::range_error("Bag : list not big enough");
            if (_hi>0)
                if (Integer(value.size())>=_hi)
                    throw std::range_error("Bag size is not big enough for the list");

            std::copy(value.begin(),value.end(),this->begin());
        }
#endif
        virtual ~Bag()
        {
        }

        virtual void insert(const T& _val = getUnset(T()))
        throw( std::out_of_range)
        {
            if (_hi>0)
                if (Integer(std::multiset<T>::size())==_hi)
                    throw std::out_of_range("Bag is full");

            std::multiset<T>::insert(_val);
            setUnset(false);
        }

        virtual void erase(iterator &it)
        {
            std::multiset<T>::erase(it);
        }

        virtual void erase(const T &value)
        {
            std::multiset<T>::erase(value);
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

        void operator=(const Bag<T,_lo,_hi>&other)
        {
            this->setUnset(other.isUnset());
            std::multiset<T>::operator=(other);
        }
    private:
        // cannot allow to have an operator that will allow different sizes of List to be assigned
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
