#include "Point.hpp"

bool bsp(const Point &a, const Point &b, const Point &c, const Point &point);

int main() {
    Point A(Fixed(1), Fixed(1));
    Point B(Fixed(1), Fixed(3));
    Point C(Fixed(3), Fixed(1));
    Point P(Fixed(5), Fixed(5));

    if (bsp(A, B, C, P)) {
        std::cout << "Le point P est à l'intérieur du triangle ABC." << std::endl;
    } else {
        std::cout << "Le point P n'est pas à l'intérieur du triangle ABC." << std::endl;
    }

    return 0;
}