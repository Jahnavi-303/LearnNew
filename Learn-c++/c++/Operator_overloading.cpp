#include "subscript_operator-overloading.cpp"

#include <iostream>
using namespace std;


//create a class with the point details
class point {
	int a;
	int b;
public:
	point(int a = 0, int b = 0) :a{ a }, b{ b } {};

	//overloading operator '+'
	point operator +(const point& p) {
		return point(a + p.a, b + p.b);
	}

	void print() {
		cout << "a: " << a << "b: " << b << endl;
	}

};

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
	subscript point(7,66);
	point.print();
	point[0] = 1;
	point[1] = 2;
	point.print();

	return 0;
}
