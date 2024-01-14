#pragma once

#include <iostream>
#include <map>

template <typename T>
int easyfind(T tab, int value) {
    for (typename T::iterator it = tab.begin(); it != tab.end(); ++it)
    {
        if (it->second == value)
            return (1);
    }
    return 0;
}
