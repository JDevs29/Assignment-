#include "Shape.h"

ostream& operator << (ostream& cout, const Shape& shapes) //NOT WORKING
{
	for (int i = 0; i < shapes.points.size(); i++)
	{
		cout << "Point: " << i + 1 << ": ";
		cout << shapes.points[i] << endl;
	}

	cout << shapes.perimeter << endl;
	cout << shapes.area << endl;
	return cout;
}
