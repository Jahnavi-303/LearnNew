#ifndef VIRTUAL_FUNC_H
#define VIRTUAL_FUNC_H
using namespace std;

class Animal {
public:
    virtual void sound();
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override;
};

class cat : public Animal {
public:
    void sound() override;
};

void call(Animal* a);

#endif