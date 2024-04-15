/* Object slicing : 2024 */

#include <iostream>
using namespace std;

class A
{
    public:
    int a;
    int b;

    void Display()
    {
        cout << "a = " << a << " " << "b = " << b << endl;
    }
};

class B : public A
{
    public:
    int c;

    void Display()
    {
        cout << "a = " << a << " " << "b = " << b << " " << "c = " << c << endl;
    }
};

int main()
{
    A a;
    a.a = 1;
    a.b = 2;
    a.Display();

    B b;
    b.a = 3;
    b.b = 4;
    b.c = 5;
    b.Display();

    a = b;      // copies a and b of object a but not c.
    a.Display();
}

