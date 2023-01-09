#pragma once
#include "Shape.h"
#include "Movable.h"

class Rectangle : public Shape //public Movable
{

	private:
		int height;
		int width;
		int calculatePerimeter();
		int calculateArea();
		void calculatePoints();

	public:
		Rectangle(int x, int y, int h, int w);
};

