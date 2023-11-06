#include "Point.hpp"

int main()
{
    ////FUERA OUTPUTS
    bsp(Point(3, 3), Point(5, 6), Point(7, 6), Point(0, 0));
    bsp(Point(3, 3), Point(5, 6), Point(7, 6), Point(10, 15));

    ////DENTRO OUTPUTS
    bsp(Point(3, 3), Point(5, 6), Point(7, 6), Point(4, 4));
    bsp(Point(0, 0), Point(5, 6), Point(7, 6), Point(2, 2));
    bsp(Point(0, 0), Point(5, 6), Point(7, 6), Point(1, 1));
}