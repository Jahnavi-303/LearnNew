#include <iostream>
using namespace std;

class point {
	int a;
	int b;
public:
	point(int a = 0, int b = 0) :a{ a }, b{ b } {};
};

int main() {
	//point p(5);

	int a = 9, b = 7;
	int c = a + b;
	cout << c << endl;
	return 0;
}
