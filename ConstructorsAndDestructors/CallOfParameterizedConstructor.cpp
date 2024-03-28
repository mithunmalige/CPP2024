/* Call of constructors : Example with parameterized constructor */
#include <iostream>
using namespace std;

class Base
{
    public:
    Base(int a)
    {
        cout << a << endl;
        cout << "Base class called" << endl;
    }
};

class Derived : public Base
{
    public:
    Derived(int a) : Base(++a)
    {
        cout << a << endl;
        cout << "Derived class called" << endl;
    }
};

int main()
{
    // Create derived class object
    // Derived d; // error

    Derived d(1); // 2, Base class called, 2, Derived class called
    return 0;
}
