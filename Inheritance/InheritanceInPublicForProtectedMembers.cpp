/******************************************************************************
Inheritance 2024
Access specifiers : public inherited : all protected members can be accessed
*******************************************************************************/
#include <iostream>
using namespace std;

class Base
{
    protected:
    int x;
};

class Derived1 : public Base
{
    protected:
    int y;
};

class Derived2 : public Derived1
{
    protected:
    int z;
    
    public:
    void SetValue(int value)
    {
        z = value;
        y = z * 2;   // multiple of 2
        x = z * 3;   // multiple of 3
        
        cout << "The z value set is " << z << endl;
        cout << "The y value set is " << y << endl;
        cout << "The x value set is " << x << endl;
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
