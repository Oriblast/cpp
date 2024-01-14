#pragma once

#include <iostream>

template<typename T>

void swap(T & i, T &j)
{
    T tmp;

    tmp = i;
    i = j;
    j = tmp;
}

template<typename T>
T min(T & m, T & n)
{
    if (m < n)
        return (m);
    else 
        return (n);
}

template<typename T>
T max(T & m, T & n)
{
    if (m > n)
        return (m);
    else 
        return (n);
}