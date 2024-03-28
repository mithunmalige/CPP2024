/* Call of constructors : Example with default constructor */
#include <iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout << "Base class called" << endl;
    }
};

class Derived : public Base
{
    public:
    Derived()
    {
        cout << "Derived class called" << endl;
    }
};

int main()
{
    // Create derived class object
    Derived d;
    // Base class called.
    // Derived class called.

    return 0;
}