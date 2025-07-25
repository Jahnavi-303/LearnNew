#include<iostream>
using namespace std;

class subscript {
	int arr[2];
public:
	subscript(int x, int y) {
		arr[0] = x;
		arr[1] = y;
	}

	int& operator [](int index) {    //returning the memory location of the specific index in the array
		if (index == 0) {
			return arr[0];
		}
		else if (index == 1) {
			return arr[1];
		}
		else {
			cout << "out of bound" << endl;
			exit(0);
		}
	}

	void print() {
		cout << "x: " << arr[0] << "y: " << arr[1] << endl;
	}
	
};