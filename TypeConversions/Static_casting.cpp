/* Static-Cast 2024*/

#include <iostream>
using namespace std;

class A
{
    public:
    A() = default;
    
    void Display() 
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

    aptr = &c;
    bptr = static_cast<B*>(aptr);
    
    // Won't throw any error and but ending with erratic ouput.
    // displays "Malige" since whatever conversion happens it always instantiate Display of B.
    if(bptr == NULL)
    {
        cout << "Invalid conversion" << endl;
    }

    bptr->Display();

    return 0;
}