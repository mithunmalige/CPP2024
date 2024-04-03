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

int main()
{
    A* aptr;
    B* bptr;
    B b;

    aptr = &b;
    // bptr = aptr; 
    // aptr holds the address of b during run-time, but still it throwns an error because during compile-time
    // the address of aptr still holds as A*
    // Hence to know compiler that we are doing casting here, we need dynamic_cast operator

    bptr = dynamic_cast<B*>(aptr);
    if (bptr != nullptr)
    {
        bptr->Display();
    }

    return 0;
}