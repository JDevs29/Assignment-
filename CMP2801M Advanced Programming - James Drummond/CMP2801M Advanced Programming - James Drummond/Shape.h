#include <vector>
#include "Point.h"
#pragma once

using namespace std;

class Shape
{
	friend ostream& operator << (ostream& cout, const Shape& shapes); //NEED HELP IS NEVER CALLED (PRINT IS USED IN RECTANGLE AS A TEST)
	
	private:
		bool isCircular = false; //isCircular is true if shape is circular 
		//Point leftTop; //Left top coordinate
		//vector <Point> points; //Ordered list of vertices

		virtual int calculateArea() = 0;
		virtual int calculatePerimeter() = 0;
		virtual void calculatePoints() = 0;

	protected:
		Point leftTop;
		vector <Point> points;
		string shapeName;
		int area;
		int perimeter;
public:
	void toString()
	{
		for (int i = 0; i < points.size(); i++)
		{
			cout << "Point: " << i + 1 << ": ";
			cout << points[i] << endl;
		}
	}
};


