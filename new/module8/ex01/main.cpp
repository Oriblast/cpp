#include "Span.hpp"

int main()
{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "the Shortest Span is : " << sp.shortestSpan() << std::endl;
        std::cout << "the longest Span is : " << sp.longestSpan() << std::endl;
        std::cout << "the contents of the Span:\n";
        sp.print();
    return (0);
}

/*
    int main ()
    {
        Span s = Span(10000);
        s.add_range();
        s.print();
    }
    
*/