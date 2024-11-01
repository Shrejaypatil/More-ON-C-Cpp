#include <iostream>

using namespace std;

/*
operator overloading is a polymorphism concept in which we can overload any operator except some
to do any other task than thier actual one;

*/

class A
{
public:
    int x;

    void operator* (A &obj)
    {
        int val1 = this->x;
        int val2 = obj.x;

        cout << "result: " << val1 - val2 << endl;
    }
};

int main()
{

    A obj1, obj2;

    obj1.x = 10;
    obj2.x = 5;

    obj1 * obj2;

    return 0;
}