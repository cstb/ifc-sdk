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

#ifndef Step_Array_h
#define Step_Array_h

#include "SimpleTypes.h"

#include <vector>
#include <stdexcept>

#ifdef  _MSC_VER
#pragma warning(disable:4290)
#endif

namespace Step {

    /*!
     ** \short C++ implementation of EXPRESS container 'ARRAY'
     ** we are using C vector wrapped into a stl environment instead of an std::vector
     */
    template<typename T, Integer _lo, Integer _hi>
    class Array: public Aggregate
    {
        enum
        {
            static_size = _hi - _lo + 1
        };
    protected:
        //! storage of the values
        T _values[static_size]; /// fixed-size array of elements of type T

    public:
        /// type definitions
        //@{
        typedef T value_type;
        typedef T* iterator;
        typedef const T* const_iterator;
        typedef T& reference;
        typedef const T& const_reference;
        typedef Integer size_type;
        typedef std::ptrdiff_t difference_type;
        //@}

        /// iterator support
        //@{
        iterator begin()
        {
            return _values;
        }
        const_iterator begin() const
        {
            return _values;
        }
        iterator end()
        {
            return _values + static_size;
        }
        const_iterator end() const
        {
            return _values + static_size;
        }
        //@}

#ifndef __SUNPRO_CC
        /// reverse iterator support
        //@{
        typedef std::reverse_iterator<iterator> reverse_iterator;
        typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

        reverse_iterator rbegin()
        {
            return reverse_iterator(end());
        }
        const_reverse_iterator rbegin() const
        {
            return const_reverse_iterator(end());
        }
        reverse_iterator rend()
        {
            return reverse_iterator(begin());
        }
        const_reverse_iterator rend() const
        {
            return const_reverse_iterator(begin());
        }
        //@}
#endif

        /// constructors
        //@{
        Array(bool unset = false) :
            Aggregate(unset)
        {
        }
        Array(const std::vector<T>& vec)
        {
            std::copy(vec.begin(), vec.end(), this->begin());
        }
        //@}

        /// operator[]
        //@{
        reference operator[](size_type i)
        {
#ifdef _DEBUG
            checkRange(i);
#endif
            return _values[i - _lo];
        }

        const_reference operator[](size_type i) const
        {
#ifdef _DEBUG
            checkRange(i);
#endif
            return _values[i - _lo];
        }
        //@}

        /// at() with range check
        //@{
        reference at(size_type i)
        {
            checkRange(i);
            return _values[i - _lo];
        }
        const_reference at(size_type i) const
        {
            checkRange(i);
            return _values[i - _lo];
        }
        //@}
        /// front() and back()
        //@{
        reference front()
        {
            return _values[0];
        }

        const_reference front() const
        {
            return _values[0];
        }

        reference back()
        {
            return _values[static_size - 1];
        }

        const_reference back() const
        {
            return _values[static_size - 1];
        }
        //@}

        /// size is constant
        static size_type size()
        {
            return static_size;
        }

        /// it is never empty
        static bool empty()
        {
            return false;
        }

        /// max_size is constant
        static size_type max_size()
        {
            return static_size;
        }

        /// swap (note: linear complexity)
        void swap(Array<T, _lo, _hi>& y)
        {
            std::swap_ranges(begin(), end(), y.begin());
        }

        /// direct access to data (read-only)
        //@{
        const T* data() const
        {
            return _values;
        }
        T* data()
        {
            return _values;
        }
        //@}

        /// use array as C array (direct read/write access to data)
        T* c_array()
        {
            return _values;
        }

        /// assignment with type conversion
        template<typename T2>
        Array<T, _lo, _hi>& operator=(const Array<T2, _lo, _hi>& rhs)
        {
            std::copy(rhs.begin(), rhs.end(), begin());
            return *this;
        }

        /// assign one value to all elements
        void assign(const T& value)
        {
            std::fill_n(begin(), size(), value);
        }

        /// comparison operators
        //@{
        bool operator<(const Array& rhs) const
        {
            int i = 0;
            while (i < static_size - 1 && _values[i] == rhs._values[i])
                ++i;
            return _values[i] < rhs._values[i];
        }
        bool operator==(const Array& rhs) const
        {
            int i = 0;
            while (i < static_size - 1 && _values[i] == rhs._values[i])
                ++i;
            return _values[i] == rhs._values[i];
        }
        //@}
    protected:
        /// check range
        static void checkRange(Integer idx)
        {
            if (idx < _lo)
                throw std::out_of_range("index is below low index");
            if (idx > _hi)
                throw std::out_of_range("index is over high index");
        }
    };

    /// UNSET for ARRAY
    template<typename T, Integer _lo, Integer _hi> inline Array<T, _lo, _hi> &getUnset(
            Array<T, _lo, _hi> )
    {
        static Array<T, _lo, _hi> unset(true);
        return unset;
    }
}

#endif

