#include <iostream>

/*
Static in C/C++ is any variable or function which always points to same memory,

memory once allocated remains till program, hence always gets updated value and never reinitlize.

Its intial value if not declared is zero and gets stored in the data segment of a process stack.

static var
static members
static functions

*/

using namespace std;

class A
{
public:
    int x;
    static int y; // static member

    A()
    {
        x = 10;
    }

    static void display()
    {
        cout << "Displays only static variables: " << y << endl;
        // cout << "Displays only static variables: "<< x << endl;   // gives error
    }
};

int A::y = 20; // must be initialized outside class


void func()
{
    static int count = 0; // does not get re-initialized and retains value even outside the function.

    count++;

    cout << "Function call number: " << count << endl;
}

int main()
{

    func();
    func();
    func();

    A obj;

    cout << "Value called directly " << A::y << endl;

    cout << "Value called through class " << obj.y << endl;

    obj.y = 30;

    cout << "Value called directly " << A::y << endl;

    cout << "Value called through class " << obj.y << endl;

    A::y = 50;

    cout << "Value called directly " << A::y << endl;

    cout << "Value called through class " << obj.y << endl;

    obj.display();

    A::display();

    return 0;
}