/* Dynamic-Cast 2024*/

#include <iostream>
using namespace std;

class A
{
    public:
    A() = default;
    
    virtual void Display() 
    {
        cout << "Mithun" << endl;
    }
};

class B : public A
{
    public:
    B() = default;

    void Display()
    {
        cout << "Malige" << endl;
    }
};

class C : public B
{
    public:
    C() = default;

    void Display()
    {
        cout << "Chitradurga" << endl;
    }
};

int main()
{
    A* aptr;
    B* bptr;
    B b;
    C c;

    // aptr = &b;
    // bptr = aptr; 
    // aptr holds the address of b during run-time, but still it throwns an error because during compile-time
    // the address of aptr still holds as A*
    // Hence to know compiler that we are doing casting here, we need dynamic_cast operator

    aptr = &c;
    bptr = dynamic_cast<B*>(aptr);
    if(bptr == NULL)
    {
        cout << "Invalid conversion" << endl;
    }

    bptr->Display();

    return 0;
}