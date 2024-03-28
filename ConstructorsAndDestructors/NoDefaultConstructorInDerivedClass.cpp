/* Call of constructors : Example explains absence of default constructor in derived class */
#include <iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        // default constructor explicitly defined
    }

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
    // Since default constructor is not been defined in the derived class.

    return 0;
}