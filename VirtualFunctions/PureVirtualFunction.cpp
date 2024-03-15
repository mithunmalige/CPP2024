/*****************************************************************************
Operator overloading 2024.
Functionality : Dynamic polymorphism - pure virtual functionality.
*******************************************************************************/

#include <iostream>
using namespace std;

/* Abstract class : Base */
class Base
{
  public:
  /* pure virtual function : do-nothing function */
  virtual void Display() = 0;
};

class Derived : public Base
{
  public:
  void Display()
  {
    cout << "Dervied class instantiated" << endl;  
  }
};

class GrandDerived : public Base
{
  public:
  void Display()
  {
    cout << "GrandDerived class instantiated" << endl;
  }
};

int main()
{
    // Base b; error : cannot declare object of abstract class
    
    Derived dptr;
    GrandDerived gdptr;  
    
    Base* bptr = &dptr;
    cout << "The address of dptr = " << &dptr << endl;
    cout << "The address of bptr = " << bptr << endl;
    
    bptr->Display(); // "Derived class instantiated"
    
    bptr = &gdptr;
    cout << "The address of dptr = " << &gdptr << endl;
    cout << "The address of bptr = " << bptr << endl;
    
    bptr->Display(); // "GrandDerived class instantiated"
    
    return 0;
}