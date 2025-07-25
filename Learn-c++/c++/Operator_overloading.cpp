#include <iostream>
using namespace std;


//create a class with the point details
class point {
	int a;
	int b;
public:
	point(int a=0, int b=0) :a{ a }, b{ b } {};

	//overloading operator '+'
	point operator +(const point& p) {
		return point(a + p.a, b + p.b);
	}

	void print() {
		cout << "a: " << a << "b: " << b << endl;
	}

};
