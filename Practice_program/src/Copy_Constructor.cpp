//Copy Constructor
#include "Copy_Constructor.h"
using namespace std;

class CpyConstructor {
    int area;
    int* radius;
public:
    CpyConstructor(int a, int* r) {
        area = a;
        radius = new int(*r);
    }

    CpyConstructor(CpyConstructor& obj){
        area = obj.area;
        radius = new int(*(obj.radius));
    }
};

