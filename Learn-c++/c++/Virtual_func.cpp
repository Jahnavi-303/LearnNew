#include<iostream>
using namespace std;

class Animal {
public:
	virtual void sound() {
		cout << "Animal" << endl;
	}
};

class Dog :public Animal{
public:
	void sound() override {
		cout << "Bark" << endl;
	}
};

class cat :public Animal{
public:
	void sound() override {
		cout << "meow" << endl;
	}
};
