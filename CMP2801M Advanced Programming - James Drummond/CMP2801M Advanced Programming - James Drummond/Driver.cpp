/* ------------------------------------------------------
CMP2801M: Advanced Programming
Driver program for assignment
Fall 2019

Written by Ayse Kucukyilmaz

This file is a representative test file.
During marking, we will use the exact same notation
as provided in the brief, so make sure
you follow that guideline. Also make sure that you don't
change the main body provided to you here.
Otherwise, your code may not pass the test cases...

GOOD LUCK!

------------------------------------------------------ */

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Movable.h"

#include <iostream>
#include <string>
#include <vector>

#pragma warning(disable:4996)

using namespace std;

int main()
{
	string userCommand;
	vector <Shape*> shapes;     // this one will hold your shapes
	vector <string> parameters; // this one will hold parameters for the commands

	while (userCommand.compare("exit") != 0)
	{
		cout << "Enter the command: " << endl; 

		getline(cin, userCommand);

		char* cstr = new char[userCommand.length() + 1];
		strcpy_s(cstr, userCommand.length() + 1, userCommand.c_str());

		char* p = strtok(cstr, " ");

		while (p != NULL)
		{
			parameters.push_back(p);
			p = strtok(NULL, " ");
		}

		delete[] cstr; 
		
		// implement a string tokenizer to populate the parameters vector 
		// check function strtok_s

		// as a result of the process, parameters[0] should hold your command, followed by your parameters 
		string command = parameters[0];

		// in the following code, consider checking for the arguments.
		// in case of too few arguments, you may remind the user the correct format

		if (command.compare("addR") == 0) 
		{
			// get parameters in the correct order
			// The following four lines have a type mismatch error
			// note that the the parameters vector contains ascii values
			// HINT: stoi function converts from string to int

			int x = stoi(parameters[1]); // fix me! also note that x is not previously defined :(
			int y = stoi(parameters[2]);
			int h = stoi(parameters[3]);
			int w = stoi(parameters[4]);

			Rectangle* r = new Rectangle(x, y, h, w); //addR leftopx, leftopy, height, width
			shapes.push_back(r);
			cout << r << endl;//DOESNT WORK (FIX PLEASE) 
			parameters.clear();
		}
		//else if (command.compare("addS") == 0) {
			// get parameters
			// ...
			//Square* s = new Square(x, y, e);
			//shapes.push_back(s);
			//cout << s->toString();
		//}

		//if (command.compare("addC") == 0) {
			// get parameters
			// ...
			//Circle* c = new Circle(x, y, r);
			//shapes.push_back(c);
			//cout << c->toString();

		//}
		//else if (command.compare("scale") == 0) {
			// scale object at index... the scaling needs to be isotropic in case of circle and square 
			// you may want to check if the index exists or not!

			// Multiple inhertitance is tricky! The Shape class does nto have a scale function, the Movable does!
			// As a result all your derived classes have scale functions... 
			// You may need to use type casting wisely to use polymorphic functionality!

		//}
		//else if (command.compare("move") == 0) {
			// move object at index 
			//int shapeNo; // read from parameters
			// you may want to check if the index exists or not!

			// Study the following code. A Shape object is not Movable, but all derived classes are...
			// you can't automatically type cast from a Shape to a Movable, but you can force a downcasting
			//Movable* m = dynamic_cast<Movable*>(shapes[shapeNo - 1]);
			//m->move(x, y);
			// scale should work similarly...

			// note that here you should see the corresponding toString output for the derived classes...
			// if toString is not a virtual function, you may see the base class functionality :(
			//cout << shapes[shapeNo - 1]->toString();
		//}
		//else if (command.compare("display") == 0) {
			// this is not given in our example, but why don't you implement a display function which shows all objects stored in shapes?
		//}

		// do any necessary postprocessing at the end of each loop...
		// yes, there is some necessary postprocessing...
		//cout << endl << endl;
	}

	//cout << "Press any key to continue...";
	//std::getchar();

	//return 0;
}

//ALL COMMENTED CODE IS UNCOMPLETED PARTS OF DOCUMENT