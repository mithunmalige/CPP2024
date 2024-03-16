/***************************************************************************************
Operator overloading 2024.
Functionality : Diamond problem - Inheriting from two dervied classes of same base class 
****************************************************************************************/

#include <iostream>
using namespace std;

class Base
{
protected:
    int x;
    
public:
    void GetX()
    {
        cout << "The value of x = " << x << endl;
    }
    
    void SetX(int value)
    {
        x = value;
    }
    
    Base() = default;
};

class Derived1 : virtual public Base
{
protected:
    int y;
    
public:
    void GetY()
    {
        cout << "The value of y = " << y << endl;
    }
    
    void SetY(int value)
    {
        y = value;
    }
    
    Derived1() = default;
};

class Derived2 : virtual public Base
{
protected:
    int z;
    
public:
    void GetZ()
    {
        cout << "The value of z = " << z << endl;
    }
    
    void SetZ(int value)
    {
        z = value;
    }
    
    Derived2() = default;
};

class Derived3 : public Derived2, public Derived1
{
protected:
    int product;
    
public:
    void PrintProduct()
    {
        product = x * y * z;
        cout << "The product = " << product << endl;
    }
};

int main()
{
    Derived3* d3 = new Derived3();
    d3->SetX(3);
    d3->SetY(4);
    d3->SetZ(5);
    
    d3->GetX();
    d3->GetY();
    d3->GetZ();
    
    d3->PrintProduct();
    
    return 0;
}