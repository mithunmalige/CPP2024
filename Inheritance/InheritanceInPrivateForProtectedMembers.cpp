/*******************************************************************************************
Inheritance 2024
Access specifiers : private inherited : only dervied class can access the base class members 
*********************************************************************************************/
#include <iostream>
using namespace std;

class Base
{
    protected:
    int x;
};

class Derived1 : private Base
{
    protected:
    int y;
};

class Derived2 : private Derived1
{
    protected:
    int z;
    
    public:
    void SetValue(int value)
    {
        z = value;
        y = z * 2;   // multiple of 2
        //x = z * 3;   // error - x is only accessed by its only derived class;
        
        cout << "The z value set is " << z << endl;
        cout << "The y value set is " << y << endl;
        //cout << "The x value set is " << x << endl;
    }
};

void SetValue(Base& base)
{
    // base.x = 5; // error - since x is protected it can only accessed by its derived functions
}

int main()
{
    Derived2 d2;
    d2.SetValue(5); 
    
    return 0;
}
