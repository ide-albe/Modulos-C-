#include "Point.hpp"

Fixed const absolute(Fixed const n)
{
    if (n < 0)
        return (n * -1);
    return (n);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed AREA;
    Fixed pointfive(0.5f);

    AREA = pointfive * absolute(a.getX()*(b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));

    Fixed A1 = pointfive * absolute(a.getX()*(b.getY() - point.getY()) + b.getX()*(point.getY() - a.getY()) + point.getX()*(a.getY() - b.getY()));
    Fixed A2 = pointfive * absolute(b.getX()*(c.getY() - point.getY()) + c.getX()*(point.getY() - b.getY()) + point.getX()*(b.getY() - c.getY()));
    Fixed A3 = pointfive * absolute(c.getX()*(a.getY() - point.getY()) + a.getX()*(point.getY() - c.getY()) + point.getX()*(c.getY() - a.getY()));

    Fixed res = A1 + A2 + A3;

    if (res.toFloat() > AREA.toFloat())
    {
        std::cout << "esta fuera!" << std::endl;
        return (false);
    }
    else
    {
        std::cout << "esta dentro!" << std::endl;
        return (true);
    }
}