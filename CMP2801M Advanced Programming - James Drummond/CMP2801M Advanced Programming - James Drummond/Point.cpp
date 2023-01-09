#include "Point.h"

Point::Point() // Constructor
{
	x = 0;
	y = 0;
}
void Point::setCoords(int a, int b)
{
	x = a;
	y = b;
}
int Point::getX() 
{
	return x;
}
int Point::getY()
{
	return y;
}

ostream& operator << (ostream& cout, const Point& points)
{
	cout << "X =  " << points.x << " Y =  " << points.y << endl;
	return cout;
}