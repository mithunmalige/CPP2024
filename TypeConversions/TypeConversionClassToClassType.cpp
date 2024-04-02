/* Type-Conversions : One Class type to another Class type */

#include <iostream>
using namespace std;

class B
{
    private:
    int a;
    int b;

    public:
    int GetA(){ return a; }
    int GetB(){ return b; }

    void Display()
    {
        cout << "The output of a and b" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    B(int x, int y) :
    a(x), b(y)
    {}
};

class A
{
    public:
    A(int x, int y) :
    a(x), b(y)
    {}

    A() = default;

    A(B& obj) // type-conversion from B to A.
    {
        a = obj.GetA();
        b = obj.GetB();
    }

    void Display()
    {
        cout << "The output of a and b" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    private:
    int a;
    int b;
};

int main()
{
    A a(4, 5);
    a.Display();

    B b(8, 9);
    b.Display();

    a = b;
    a.Display();

    return 0;
}