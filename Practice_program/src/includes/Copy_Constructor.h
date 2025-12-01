#ifndef COPY_CONSTRUCTOR_H
#define COPY_CONSTRUCTOR_H

class Component1 {
    int area;
    int* radius;
public: 
    Component1(int a, int* r);

    // Copy Constructor
    Component1(const Component1& obj);

    // Destructor
    ~Component1() {
        delete radius;
    }
};
#endif // COMPONENT1_H