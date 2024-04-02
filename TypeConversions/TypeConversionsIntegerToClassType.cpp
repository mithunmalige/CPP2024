/* Type-Conversions : Integer to Class type */

#include <iostream>
using namespace std;

class A
{
    public:
    A(int x, int y) :
    a(x), b(y)
    {}

    A() = default;

    A(int x) // integer to class type conversion.
    {
        a = a + x;
        b = b + x;
    }

    void Display()
    {
        cout << "The output of a and b" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    private:
    int a = 9;
    int b = 8;
};

int main()
{
    A obj(4, 5);
    obj.Display();
    /* Whatever sent in argument for initializer list cannot adapating same below obj = 5
       it is considering what is set in class 9 and 8 */ 
    obj = 5;
    obj.Display();

    return 0;
}