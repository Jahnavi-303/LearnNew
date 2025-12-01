#include <iostream>
#include "Copy_Assignment_operator.h"
#include "Copy_Constructor.h"

using namespace std;

int main() {
    // Test Copy Constructor
    int r = 5;
    CpyConstructor obj1(10, &r);
    CpyConstructor obj2 = obj1; // Invokes copy constructor

    // Test Copy Assignment Operator
    int w = 7;
    CopyAssignment obj3(14, &w);
    CopyAssignment obj4(0, &w);
    obj4 = obj3; // Invokes copy assignment operator

    cout << "Tests completed!" << endl;
    return 0;
}