/* RTTI : Run-Time type identification */

#include <iostream>
#include <typeinfo>
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
    int a = 5;
    float b = 6.0;
    double c = 7.0;

    cout << "The results of Run-Time type identification : " << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;

    A* aptr = new A;
    B bObj;
    cout << typeid(*aptr).name() << endl;
    aptr = &bObj;
    cout << typeid(*aptr).name() << endl; //without virtual -> A. with virtual -> B.

    if (typeid(*aptr).name() == typeid(bObj).name())
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    cout << typeid(A*).name() << endl;
    cout << typeid(aptr).name() << endl;
    return 0;
}