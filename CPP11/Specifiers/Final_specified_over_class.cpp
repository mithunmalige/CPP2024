/* Final specifier in cpp */
#include <iostream>
using namespace std;
class A final
{
    public:
    virtual void Fun1() 
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

/* error : cannot derive from final base A in dervied type B */
class B : public A
{
    public:

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