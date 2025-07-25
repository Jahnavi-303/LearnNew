#include "Inheritence_practice1.h"
#include <iostream>
using namespace std;

class Cuboid {
public:
	int length, width, height;
	int display() {
		return length, width, height;
	}
};

//Single inheritence
class CuboidVol : virtual public Cuboid {
public:
	void read_input() {
		cin >> length >> width >> height;
	}
	int display_out() {
		int volume = (length * width * height);
		cout << volume<<endl;
		return 0;
	}
};

//Multiple inheritence
class Multiple : virtual public Cuboid, public CuboidVol {
public: 
	int vol_sq() {
		int vol_sq = CuboidVol::display_out() * CuboidVol::display_out();
		int len_sq = Cuboid::length * Cuboid::length;
		cout << vol_sq<<endl;
		cout << len_sq << endl;
		return 0;
	}
};

//Multilevel inheritence
class Multilevel :public CuboidVol {
public:
	int multi = 18;
};