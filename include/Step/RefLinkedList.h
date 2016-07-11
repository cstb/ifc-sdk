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

#ifndef Step_RefLinkedList_h
#define Step_RefLinkedList_h

#include <Step/Types.h>
#include <Step/BaseSPFObject.h>

#include <iterator>
#include <map>
#include <iostream>

namespace Step {

    template<class _Ty> class RefLinkedList;

    template<class _Ty>
    /// Custom bidirectional iterator
    class RefLinkedList_iterator
    {

    public:

        //! typedef to our list type
        typedef RefLinkedList<_Ty> RefLinkedList_type;
        //! typedef to our list element type
        typedef typename RefLinkedList<_Ty>::element_type element_type;
        //! typedef to our iterator category
        typedef std::bidirectional_iterator_tag iterator_category;
        //! typedef to our value type
        typedef _Ty value_type;
        //! typedef to our reference type
        typedef value_type & reference;
        //! typedef to our pointer type
        typedef value_type * pointer;
        //! typedef to our difference type
        typedef int difference_type;

        //! Default constructor
        RefLinkedList_iterator()
        : m_index(0), m_refLinkedList(0)
        {
        }

        /*!
         * Constructor
         * \param index position in the refLinkedList
         * \param refLinkedList the list this iterator is iterating
         */
        RefLinkedList_iterator(unsigned int index, const RefLinkedList_type* refLinkedList)
        : m_index(index), m_refLinkedList(refLinkedList)
        {}

        /*!
         * Constructor
         * \param index position in the refLinkedList
         * \param refLinkedList the list this iterator is iterating
         * \param currentIt iterator in the refLinkedList
         */
        RefLinkedList_iterator(unsigned int index, const RefLinkedList_type* refLinkedList, const typename element_type::iterator currentIt)
        : m_index(index), m_refLinkedList(refLinkedList), m_currentIt(currentIt)
        {}

        /*!
         * Copy constructor
         * \param it the iterator to copy
         */
        RefLinkedList_iterator(const RefLinkedList_iterator& it)
        : m_index(it.m_index), m_refLinkedList(it.m_refLinkedList), m_currentIt(it.m_currentIt)
        {}

        /*!
         * Assignment operator
         * \param it the iterator to copy
         */
        RefLinkedList_iterator& operator=(const RefLinkedList_iterator& it)
        {
            m_index = it.m_index;
            m_currentIt = it.m_currentIt;
            m_refLinkedList = it.m_refLinkedList;
            return *this;
        }

        /*!
         * Get a reference to the element
         * \return a reference to the element
         */
        reference operator*() const
        {
            // return designated object

            Step::BaseObject* tmp = (*m_currentIt).second.get();
            // If the object is not inited, init it (lazy loading)
            if (tmp->isOfType(Step::BaseSPFObject::getClassType()))
            {
                tmp = tmp->getExpressDataSet()->get((*m_currentIt).first);
            }
            return *(static_cast<pointer>(tmp));
        }

        /*!
         * Get a pointer to the element
         * \return a pointer to the element
         */
        pointer operator->() const
        {
            // return designated object
            return (&**this);
        }

        /*!
         * Pre-increment the iterator
         * \return the iterator at the current position
         */
        RefLinkedList_iterator& operator++()
        {
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

        /*!
         * Pre-decrement the iterator
         * \return the iterator at the current position
         */
        RefLinkedList_iterator& operator--()
        {
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

        /*!
         * Post-increment the iterator
         * \return the iterator at the previous position
         */
        RefLinkedList_iterator operator++(int)
        {
            // postincrement
            RefLinkedList_iterator _Tmp = *this;
            ++*this;
            return (_Tmp);
        }

        /*!
         * Post-decrement the iterator
         * \return the iterator at the previous position
         */
        RefLinkedList_iterator operator--(int)
        {
            // postdecrement
            RefLinkedList_iterator _Tmp = *this;
            --*this;
            return (_Tmp);
        }

        /*!
         * Comparison operators
         * \param rhs the iterator to compare to
         * \return success
         * \{
         */
        bool operator==(const RefLinkedList_iterator &rhs) const
        {
            // test for iterator equality
            return ((m_refLinkedList == rhs.m_refLinkedList) && (m_index == rhs.m_index) && (m_currentIt == rhs.m_currentIt));
        }

        bool operator!=(const RefLinkedList_iterator &rhs) const
        {
            return ((*this == rhs) == false);
        }
        //!\}
    private:

        unsigned int m_index;
        const RefLinkedList<_Ty> * m_refLinkedList;
        typename element_type::iterator m_currentIt;

    };

    // Declare a custom container

    template<class _Ty>

    //! Custom bidirectional container.
    /*!
     * It does not contain elements but references to vectors.
     * This container links these containers into one, virtually.
     */
    class RefLinkedList
    {
    public:
        //! typedef to our element type
        typedef std::map<Id, Step::RefPtr<BaseObject> > element_type;

        //! typedef to our list type
        typedef std::vector< element_type* > refList_type;

        //! Our list
        refList_type m_refList;

        //! typedef to our value type
        typedef _Ty value_type;

        //! typedef to our reference
        typedef value_type & reference;

        //! typedef to our const reference
        typedef const value_type & const_reference;

        //! typedef to our iterator type
        typedef RefLinkedList_iterator<_Ty> iterator;

        //! typedef to our const iterator type
        typedef RefLinkedList_iterator<const _Ty> const_iterator;

        //! typedef to our difference_type
        typedef int difference_type;

        //! typedef to our size type
        typedef unsigned int size_type;

        RefLinkedList()
        {
            // init index to 0
        }

        /*!
         * Returns the number of elements in all the linked lists.
         * \return  the number of elements in all the linked lists.
         */
        size_type size() const
        {
            size_type result = 0;
            refList_type::const_iterator it = m_refList.begin();
            for (;it != m_refList.end(); ++it)
            {
                result += (*it)->size();
            }
            return result;
        }

        /*!
         * Returns the max size. There is no such thing as a max size for this kind of list
         * \return -1
         */
        size_type max_size() const
        {
            return size_type(-1);
        }

        /*!
         * Returns whether or not the RefLinkedList is empty
         * \return Whether or not the RefLinkedList is empty
         */
        bool empty() const
        {
            refList_type::const_iterator it = m_refList.begin();
            for (;it != m_refList.end(); ++it)
            {
                if (!(*it)->empty())
                return false;
            }
            return true;
        }

        /*!
         * Returns an iterator referring to the first element in the RefLinkedList container.
         * \return An iterator to the beginning of the sequence.
         */
        iterator begin()
        {
            if (m_refList.empty())
            return iterator(0, 0);
            // return iterator for beginning of non-mutable sequence
            unsigned index=0;
            while (index<m_refList.size() && m_refList[index]->empty())
            ++index;

            if (index==m_refList.size())
            { // we didn't find any filled list
                return iterator(index-1, this, m_refList[index-1]->end());
            }
            else
            {
                return iterator(index, this, m_refList[index]->begin());
            }
        }

        const_iterator begin() const
        {
            if (m_refList.empty())
            return const_iterator(0, 0);
            // return iterator for beginning of non-mutable sequence
            unsigned index=0;
            while (index<m_refList.size() && m_refList[index]->empty())
            ++index;

            if (index==m_refList.size())
            { // we didn't find any filled list
                return const_iterator(index-1, reinterpret_cast<const RefLinkedList<const _Ty> *>(this), m_refList[index-1]->end());
            }
            else
            {
                return const_iterator(index, reinterpret_cast<const RefLinkedList<const _Ty> *>(this), m_refList[index]->begin());
            }
        }
        /*!
         * Returns an iterator referring to the past-the-end element in the RefLinkedList container.
         * \return An iterator to the element past the end of the sequence.
         */
        iterator end()
        {
            if (m_refList.empty())
            return iterator(0, 0);
            // return iterator for end of non-mutable sequence
            unsigned int x = m_refList.size()-1;
            return iterator(x, this, m_refList[x]->end());
        }

		const_iterator end() const
        {
            if (m_refList.empty())
            return const_iterator(0, 0);
            // return iterator for end of non-mutable sequence
            unsigned int x = m_refList.size()-1;
            return const_iterator(x, reinterpret_cast<const RefLinkedList<const _Ty> *>(this), m_refList[x]->end());
        }

        /*!
         * Adds a new element at the end of the list, right after its current last element. The content of this new element is initialized to a copy of x.
         * \param value the value to add.
         */
        void push_back(std::map<Id, Step::RefPtr<BaseObject> >* value)
        {
            m_refList.push_back(value);
        }

        /*!
         * Returns a reference to the element at position position in the RefLinkedList.
         * \param position Position of an element in the RefLinkedList.
         * \return The element at the specified position in the RefLinkedList.
         */
        refList_type::reference refListAt(refList_type::size_type position)
        {
            return m_refList.at(position);
        }

        refList_type::const_reference refListAt(refList_type::size_type position) const
        {
            return m_refList.at(position);
        }

        /*!
         * The number of elements that conform the RefLinkedList's content.
         * \return The number of elements that conform the RefLinkedList's content.
         */
        refList_type::size_type refListSize() const
        {
            return m_refList.size();
        }

        /*!
         * Returns whether or not the RefLinkedList is empty
         * \return Whether or not the RefLinkedList is empty
         */
        bool refListEmpty() const
        {
            return m_refList.empty();
        }
    };
}
#endif

