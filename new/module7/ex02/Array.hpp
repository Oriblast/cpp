#pragma once
#include <iostream>

template<class T>
class Array {
    private:
    T *_array;
    unsigned int _lg;

    public:
    Array() : _array(NULL), _lg(0) {

    }

    ~Array() {
        if (_array != NULL)
            delete [] _array;
    }

    Array(Array const &rab) : _lg(rab._lg) {
        _array = new T[_lg];
        if (!this->_array)
                throw std::runtime_error("Bad allocation");
        for (int i = 0; i < _lg; i++)
            _array[i] = rab._array[i];
    }

    Array &operator=(Array const &rab) {
        _lg = rab._lg;
        _array = new T[_lg];
        if (!_array)
            throw std::runtime_error("bad alloc");
        for (int i = 0; i < _lg; i++)
            _array[i] = rab._array[i];
        return (*this);
    }

    Array(unsigned int lg) : _lg(lg) {
        _array = new (std::nothrow) T[lg];
        if (!_array)
            throw std::runtime_error("bad alloc");
        for (int i = 0; i < lg; i++)
            _array[i] = 0;
    }

    T &operator[](unsigned int lg) {
        if ( lg < _lg)
            return _array[lg];
        throw std::runtime_error("error indexation");
    }

    unsigned int size()
    {
        return _lg;
    }
};