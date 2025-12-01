#ifndef COMPONENT2_H
#define COMPONENT2_H

class Component2 {
    double length;
    double* width;  

public:
    Component2(double l, double* w);
    // Copy Assignment Operator
    Component2& operator=(const Component2& obj);
    // Destructor
    ~Component2() {
        delete width;
    }
};