#include <iostream>
#pragma once

using namespace std;

class Point
{
	friend ostream& operator << (ostream& cout, const Point& points);

	private:
		int x;
		int y;

	public:
		Point();
		void setCoords(int a, int b);
		int getX();
		int getY();

};

