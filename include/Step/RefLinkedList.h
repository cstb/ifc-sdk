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
#ifndef STEP_REFLINKEDLIST
#define STEP_REFLINKEDLIST

#include <iterator>
#include <map>
#include <iostream>


#include "Types.h"
#include "BaseSPFObject.h"

namespace Step {

    template<class _Ty> class RefLinkedList;

    template<class _Ty>
    /// Custom bidirectional iterator
    class RefLinkedList_iterator {

    public:

        typedef RefLinkedList<_Ty> RefLinkedList_type;
        typedef typename RefLinkedList<_Ty>::element_type element_type;
        typedef std::bidirectional_iterator_tag iterator_category;
        typedef _Ty value_type;
        typedef value_type & reference;
        typedef value_type * pointer;
        typedef int difference_type;

        RefLinkedList_iterator() {
            // default constructor
        }

        RefLinkedList_iterator(unsigned int index, RefLinkedList_type* refLinkedList)
                : m_index(index), m_refLinkedList(refLinkedList)
        {}

        RefLinkedList_iterator(unsigned int index, RefLinkedList_type* refLinkedList, const typename element_type::iterator currentIt)
                : m_index(index), m_refLinkedList(refLinkedList), m_currentIt(currentIt)
        {}

        RefLinkedList_iterator(const RefLinkedList_iterator& it)
                : m_index(it.m_index), m_refLinkedList(it.m_refLinkedList), m_currentIt(it.m_currentIt) {}

        RefLinkedList_iterator& operator=(const RefLinkedList_iterator& it)
        {
            m_index = it.m_index;
            m_currentIt = it.m_currentIt;
            m_refLinkedList = it.m_refLinkedList;
            return *this;
        }

        reference operator*() const {
            // return designated object

            Step::BaseObject* tmp = (*m_currentIt).second.get();
            // If the object is not inited, init it (lazy loading)
            if (tmp->isOfType(Step::BaseSPFObject::getClassType())) {
                tmp = tmp->getExpressDataSet()->get((*m_currentIt).first);
            }
            return *(static_cast<pointer>(tmp));
        }

        pointer operator->() const {
            // return designated object
            return (&**this);
        }

        RefLinkedList_iterator& operator++() {
            // preincrement
            if (m_refLinkedList->empty()) return (*this);

            ++m_currentIt;
            if ((m_currentIt == m_refLinkedList->refListAt(m_index)->end()) &&
                    (m_index < (m_refLinkedList->refListSize()-1)))
            {
                while ((m_index < (m_refLinkedList->refListSize()-1)) && (m_refLinkedList->refListAt(++m_index)->empty()))
                    ;
                m_currentIt = m_refLinkedList->refListAt(m_index)->begin();
            }
            return (*this);
        }

        RefLinkedList_iterator& operator--() {
            // predecrement
            if ((m_currentIt == m_refLinkedList->at(m_index)->begin()) && (m_index > 0))
            {
                while ((m_index > 0) && (m_refLinkedList->refListAt(--m_index)->empty()))
                    ;
                m_currentIt = m_refLinkedList->refListAt(m_index)->end();
            }
            --m_currentIt;
            return (*this);
        }

        RefLinkedList_iterator operator++(int) {
            // postincrement
            RefLinkedList_iterator _Tmp = *this;
            ++*this;
            return (_Tmp);
        }

        RefLinkedList_iterator operator--(int) {
            // postdecrement
            RefLinkedList_iterator _Tmp = *this;
            --*this;
            return (_Tmp);
        }

        bool operator==(const RefLinkedList_iterator &_Right) const {
            // test for iterator equality
            return ((m_refLinkedList == _Right.m_refLinkedList) && (m_index == _Right.m_index) && (m_currentIt == _Right.m_currentIt));
        }

        bool operator!=(const RefLinkedList_iterator &_Right) const {
            return ((*this == _Right) == false);
        }

    private:

        unsigned int m_index;
        RefLinkedList<_Ty> * m_refLinkedList;
        typename element_type::iterator m_currentIt;

    };


    // Declare a custom container

    template<class _Ty>

    //! Custom bidirectional container.
    /*! It does not contain elements but references to vectors.
    * This container links these containers into one, virtually.
    */
    class RefLinkedList {
    public:

        typedef std::map<Id, Step::RefPtr<BaseObject> > element_type;
        typedef std::vector< element_type* > refList_type;

        refList_type m_refList;

        typedef _Ty value_type;
        typedef value_type & reference;
        typedef const value_type & const_reference;
        typedef RefLinkedList_iterator<_Ty> iterator;
        typedef const RefLinkedList_iterator<_Ty> const_iterator;
        typedef int difference_type;
        typedef unsigned int size_type;

        RefLinkedList() {
            // init index to 0
        }

        size_type size() const {
            size_type result = 0;
            refList_type::const_iterator it = m_refList.begin();
            for (;it != m_refList.end(); ++it) {
                result += (*it)->size();
            }
            return result;
        }

        size_type max_size() const {
            return -1;
        }

        bool empty() const {
            refList_type::const_iterator it = m_refList.begin();
            for (;it != m_refList.end(); ++it) {
                if (!(*it)->empty())
                    return false;
            }
            return true;
        }

        const_iterator begin() {
            if (m_refList.empty())
                return RefLinkedList_iterator<_Ty>(0, 0);
            // return iterator for beginning of non-mutable sequence
            unsigned index=0;
            while (index<m_refList.size() && m_refList[index]->empty())
                ++index;

            if (index==m_refList.size()) { // we didn't find any filled list
                return RefLinkedList_iterator<_Ty>(index-1, this, m_refList[index-1]->end());
            } else {
                return RefLinkedList_iterator<_Ty>(index, this, m_refList[index]->begin());
            }
        }

        const_iterator end() {
            if (m_refList.empty())
                return RefLinkedList_iterator<_Ty>(0, 0);
            // return iterator for end of non-mutable sequence
            unsigned int x = m_refList.size()-1;
            return RefLinkedList_iterator<_Ty>(x, this, m_refList[x]->end());
        }

        void push_back(std::map<Id, Step::RefPtr<BaseObject> >* _Val) {
            m_refList.push_back(_Val);
        }


        refList_type::reference refListAt(refList_type::size_type __n) {
            return m_refList.at(__n);
        }

        refList_type::size_type refListSize() {
            return m_refList.size();
        }

        bool refListEmpty() {
            return m_refList.empty();
        }
    };
}
#endif

