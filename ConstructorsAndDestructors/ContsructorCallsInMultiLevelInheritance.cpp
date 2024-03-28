/* Call of constructors : Call of Constructors in Multi-level Inheritance */
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

class Base2 : public Base1 
{
    public:
    Base2()
    {
        cout << "Base2 constructor called" << endl;
    }
};

class Base3 : public Base2
{
    public:
    Base3()
    {
        cout << "Base3 constructor called" << endl;
    }
};

class Derived : public Base3
{
    public:
    Derived()
    {
        cout << "Derived constructor called" << endl;
    }
};

int main()
{
    // Create derived class object.
    // Constructor calls in the order of inheritance(Top to low) : 
    // Base1, Base2, Base3, Derived. 
    Derived d;

    return 0;
}