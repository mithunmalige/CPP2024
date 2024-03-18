/******************************************************************************
Inheritance 2024
Access specifiers : protected inherited : for private members cannot be accessed
*******************************************************************************/
#include <iostream>
using namespace std;

class Base
{
    private:
    int x;
};

class Derived1 : protected Base
{
    private:
    int y;
};

class Derived2 : protected Derived1
{
    private:
    int z;
    
    public:
    void SetValue(int value)
    {
        z = value;
        //y = z * 2;   // error
        //x = z * 3;   // error
        
        cout << "The z value set is " << z << endl;
        //cout << "The y value set is " << y << endl;
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
