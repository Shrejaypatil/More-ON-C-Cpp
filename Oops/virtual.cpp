#include <iostream>

/*
Virtual keyword:

1. for runtime polymorphism
2. for abstract of pure functions

Any class having even a single abstract function is an abstract class

*/

using namespace std;

class A
{
public:
    virtual void display() // this will bind child class function hence proper calling
    {
        cout << "I am parent class" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "I am child class" << endl;
    }
};

class parent
{
public:
    virtual void print() = 0; // only defination
};

class child : public parent
{
    public:

    // implementation of function is here
    void print()
    {
        cout << "Hello I am implemented" << endl;
    }
};

using namespace std;

int main()
{

    A *bptr;

    B obj;

    bptr = &obj;

    bptr->display();

    child c;

    c.print();

    // parent p; // gives error as abstract class cannot initialize an object;

    return 0;
}