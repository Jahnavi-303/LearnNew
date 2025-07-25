#ifndef OPERATOR_OVERLOADING_H
#define OPERATOR_OVERLOADING_H

class point {
public:
	point(int a = 0, int b = 0);

	point operator +(const point& p);

	void print();
};
#endif