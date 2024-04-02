/* Type-Conversions : Class to Integer type */

#include <iostream>
using namespace std;

class A
{
    public:
    A(int x, int y) :
    a(x), b(y)
    {}

    A() = default;

    operator int () // syntax for class to integer type conversion.
    {
        int k =  a + b;
        return k;
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
    A obj(4, 5);
    obj.Display();

    int k = obj;
    cout << "The value of k = " << k << endl; // k = 9;

    return 0;
}