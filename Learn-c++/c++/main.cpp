#include <iostream>

#include "subscript_operator_overloading.cpp"
#include "Operator_overloading.cpp"
#include "Inheritence_practice1.cpp"
#include "Virtual_func.cpp"


int main() {
	//create 2 objects with point cordinate details
	point p1(5, 6), p2(4, 5);
	point p3 = p1 + p2;     //point p3 = p1.operator+(p2)   
	//p3.print();

	//sample code with the implicit datatypes using '+' operator
	/*int a = 9, b = 7;
	int c = a + b;
	cout << c << endl;*/

	//object for subscript operator overloading
	subscript p(7, 66);
	p.print();
	p[0] = 1;
	p[1] = 2;
	p.print();

	//inheritence introduction
	CuboidVol volume;
	volume.read_input();
	volume.display();
	volume.display_out();

	//multiple inheritence
	Multiple mul;
	//there won't be access for dispay function through multiple function->as it becomes a diamond problem
	// through cuboid_vol we can access cuboid class and also Multiple class is inherited cuboid which will make it dublicated
	//mul.display()
	mul.display();
	mul.vol_sq();

	//MultiLevel inheritence
	Multilevel muiltiLev;
	muiltiLev.display();
	muiltiLev.display_out();

	//virtual function
	Dog b;
	cat c;
	Animal *a = &b;
	a->sound();


	return 0;
}