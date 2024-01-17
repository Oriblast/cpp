#pragma once 

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

class Span
{
    private:
        std::vector<int> _arr;
        unsigned int _size;
        unsigned int _variable;
        
    public:
        Span(void);
        Span(Span const &src);
        Span &operator=(Span const &src);
        ~Span(void);

        Span(unsigned int size);
        void addNumber(unsigned int size);
        int shortestSpan(void);
        int longestSpan(void);
        void add_range(void);
        void print(void);
};
