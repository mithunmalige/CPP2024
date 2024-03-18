/******************************************************************************
Inheritance 2024
Access specifiers : Public data members inherited via protected
*******************************************************************************/
#include <iostream>
using namespace std;

class Base
{
    public:
    int x;
};

class Derived1 : protected Base
{
    public:
    int y;
};

class Derived2 : protected Derived1
{
    public:
    int z;
    
    public:
    void SetValue(int value)
    {
        z = value;
        y = z * 2;   // no error
        //x = z * 3;   // no error
        
        cout << "The z value set is " << z << endl;
        cout << "The y value set is " << y << endl;
        cout << "The x value set is " << x << endl;
    }
};

void SetValue(Base& base)
{
    base.x = 5; // no error
    cout << base.x << endl;
}

void SetValue(Derived1& d1)
{
    // d1.x = 4; // error - It becomes protected so only derived class can access it.
}

int main()
{
    Base b;
    SetValue(b);
    
    Derived2 d2;
    d2.SetValue(5); 
    
    return 0;
}
