#ifndef SUBSCRIPT_OPERATOR_OVERLOADING_H
#define SUBSCRIPT_OPERATOR_OVERLOADING_H

class subscript {
public:
	subscript(int x = 0, int y = 0);
	int& operator [](int index);
	void print();
};
#endif
