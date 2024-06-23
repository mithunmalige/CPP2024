/* Explicit specifier in cpp */
#include <iostream>
using namespace std;
class A
{
    private:
    int a;
    int b;

    public:
    explicit A(int x)
    {
        a = x;
        b = 0;
    }

    A() = default;

    A(int x, int y)
    {
        a = x;
        b = y;
    }

    void Display()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    A a1(1);
    a1.Display();

    A a2 = 1;       // Use of explicit keyword throws an error.
    a2.Display();   // to protect implicit conversion.


    return 0;
}