#ifndef DEF_POINT
#define DEF_POINT

#include "Fixed.hpp"

class Point {
private:
    Fixed x;
    Fixed y;

public:
    Point() : x(0), y(0) {}
    Point(const Fixed& xValue, const Fixed& yValue) : x(xValue), y(yValue) {}

    Fixed getX() const {
        return x;
    }

    Fixed getY() const {
        return y;
    }
};

#endif