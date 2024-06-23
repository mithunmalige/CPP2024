/* Final specifier in cpp */
#include <iostream>
using namespace std;
class A
{
    public:
    virtual void Fun1() final
    {
        cout << a << endl; 
    }

    virtual void Fun2() 
    {
        cout << a << endl;
    }

    A() = default;

    private:
    int a;
};

class B : public A
{
    public:
    void Fun1()
    {
        // error : overriding final specified function Fun1.
    }

    void Fun2()
    {
        cout << b << endl; 
    }

    B() = default;
    private: 
    int b; 
};

int main()
{
    A *aptr = new A();
    aptr->Fun1();

    B* bptr = new B();
    bptr->Fun2();

    return 0;
}