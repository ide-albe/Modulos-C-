#include "Point.hpp"

Point::Point()
{
    (Fixed)this->y = 0;
    (Fixed)this->x = 0;
}

Point::Point( const float &x, const float &y ) : x(Fixed(x)), y(Fixed(y))
{
}

Point::Point( const Point &copy )
{
    *this = copy;
}

Point::~Point()
{

}

Point& Point::operator=( const Point &copy )
{
    (void)copy;
    return (*this);
}

Fixed Point::getX() const
{
    return (this->x);
}

Fixed Point::getY() const
{
    return (this->y);
}
