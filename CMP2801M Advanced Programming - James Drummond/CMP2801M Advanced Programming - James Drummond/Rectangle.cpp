#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int h, int w)
{
	leftTop.setCoords(x, y);
	points.push_back(leftTop);
	height = h;
	width = w;

	calculateArea();
	calculatePerimeter();
	calculatePoints();
}
int Rectangle::calculateArea()
{
	int area = height * width;
	return area; 
}
int Rectangle::calculatePerimeter()
{
	perimeter = 2 * (height + width);
	return perimeter;
}
void Rectangle::calculatePoints()
{
	//leftop, rightop, rightbottom, leftbottom
	//leftTop.setCoords(leftX, leftY);
	//points.push_back(leftTop);

	Point rightTop;
	rightTop.setCoords(leftTop.getX() + 200, leftTop.getY());
	points.push_back(rightTop);

	Point rightBottom;
	rightBottom.setCoords(leftTop.getX() + 200, leftTop.getY() - 50);
	points.push_back(rightBottom);

	Point leftBottom;
	leftBottom.setCoords(leftTop.getX(), leftTop.getY() - 50);
	points.push_back(leftBottom);

	for (int i = 0; i < points.size(); i++) //PRINT WORKS HERE BUT NOT IN SHAPE.CPP? 
	{
		cout << "Point: " << i + 1 << ": ";
		cout << points[i] << endl;
	}
}
