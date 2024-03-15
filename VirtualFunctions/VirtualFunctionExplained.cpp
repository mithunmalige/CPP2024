/*****************************************************************************
Operator overloading 2024.
Functionality : Dynamic polymorphism - virtual functionality.
*******************************************************************************/

#include <iostream>
using namespace std;

class Base
{
  public:
  virtual void Display()
  {
    cout << "Base class instantiated" << endl;        
  }
};

class Derived : public Base
{
  public:
  void Display()
  {
    cout << "Dervied class instantiated" << endl;  
  }
};

int main()
{
    Derived dptr;
    
    Base* bptr = &dptr;
    cout << "The address of dptr = " << &dptr << endl;
    cout << "The address of bptr = " << bptr << endl;

    /* 
        Even though bptr is pointing to object of dptr 
        Since the addresses are same, It should instantiate Display function 
        of Dervied class but it is not.
        This can be acheived from either type-casting like below.
    */
    
    bptr->Display(); // "Derived class instantiated"
    static_cast<Derived*>(bptr)->Display(); // "Derived class instantiated"
    
    return 0;
}