#include "Point.hpp"

bool bsp(const Point &a, const Point &b, const Point &c, const Point &point) {
    Fixed alpha = ((b.getY().getRawBits() - c.getY().getRawBits()) * (point.getX().getRawBits() - c.getX().getRawBits()) +
                   (c.getX().getRawBits() - b.getX().getRawBits()) * (point.getY().getRawBits() - c.getY().getRawBits())) /
                  ((b.getY().getRawBits() - c.getY().getRawBits()) * (a.getX().getRawBits() - c.getX().getRawBits()) +
                   (c.getX().getRawBits() - b.getX().getRawBits()) * (a.getY().getRawBits() - c.getY().getRawBits()));

    Fixed beta = ((c.getY().getRawBits() - a.getY().getRawBits()) * (point.getX().getRawBits() - c.getX().getRawBits()) +
                  (a.getX().getRawBits() - c.getX().getRawBits()) * (point.getY().getRawBits() - c.getY().getRawBits())) /
                 ((b.getY().getRawBits() - c.getY().getRawBits()) * (a.getX().getRawBits() - c.getX().getRawBits()) +
                  (c.getX().getRawBits() - b.getX().getRawBits()) * (a.getY().getRawBits() - c.getY().getRawBits()));

    Fixed gamma = Fixed(1) - alpha - beta;

    return alpha.getRawBits() >= 0 && beta.getRawBits() >= 0 && gamma.getRawBits() >= 0;
}
/*formule : alpha
(yb - yc) * (xp - xc) + (xc - xb) * (yp - yc) 
/
(yb - yc) * (xa - xc) + (xc - xb) * (yp - yc)
beta =
(yc - ya) * (xp - xa) + (xa - xc) * (yp - yc)
/
(yb - yc) * (xa - xc) + (xc - xb) * (yp - yc)
gamma = 1 - alpha - beta
*/