#include <iostream>

using namespace std;

class parent;

class some
{
public:
    void print(parent &obj);
};

class parent
{
private:
    int x;

protected:
    int y;

public:
    parent()
    {
        x = 10;
        y = 20;
    }

    friend class child; // freind class

    friend void display(parent &obj); // friend func global

    friend void some::print(parent &obj); // friend member func
};

void some::print(parent &obj)
{
    cout << "Private : " << obj.x << endl;
    cout << "Protected : " << obj.y << endl;
}

void display(parent &obj)
{
    cout << "Private : " << obj.x << endl;
    cout << "Protected : " << obj.y << endl;
}

class child
{

public:
    void display(parent &obj)
    {
        cout << "Private : " << obj.x << endl;
        cout << "Protected : " << obj.y << endl;
    }
};

int main()
{

    child c;

    parent p;

    c.display(p);

    display(p);

    some s;

    s.print(p);

    return 0;
}