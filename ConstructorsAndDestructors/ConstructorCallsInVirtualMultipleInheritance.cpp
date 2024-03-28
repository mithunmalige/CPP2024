/* Call of constructors : Call of Constructors in Multiple Inheritance which includes virtual inheritance as well */
#include <iostream>
using namespace std;

class Base1
{
    public:
    Base1()
    { 
        cout << "Base1 constructor called" << endl;
    }
};

class Base2
{
    public:
    Base2()
    {
        cout << "Base2 constructor called" << endl;
    }
};

class Derived : public Base2, virtual public Base1
{
    public:
    Derived()
    {
        cout << "Derived constructor called" << endl;
    }
};

int main()
{
    // Create derived class object
    Derived d;
    // Constructor calls in the order of inheritance but virtual comes first
    // Base1, Base2, Derived

    return 0;
}