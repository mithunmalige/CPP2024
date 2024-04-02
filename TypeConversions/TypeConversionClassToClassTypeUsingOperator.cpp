/* Type-Conversions : One Class type to another Class type */

#include <iostream>
using namespace std;

class B
{
    private:
    int a;
    int b;

    public:
    int& GetA(){ return a; }
    int& GetB(){ return b; }

    void Display()
    {
        cout << "The output of a and b" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    B(int x, int y) :
    a(x), b(y)
    {}

    B() = default;
};

class A
{
    public:
    A(int x, int y) :
    a(x), b(y)
    {}

    A() = default;

    operator B () // Type conversion from one class to another class.
    {
        B obj;
        obj.GetA() = a;
        obj.GetB() = b;

        return obj;
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

    b = a; // assigns a and b values of A.
    b.Display();

    return 0;
}