/*****************************************************************************
Operator overloading 2024.
Functionality : Dynamic polymorphism - size of pure virtual functionality.
*******************************************************************************/

#include <iostream>
using namespace std;

/* Abstract class : Base */
class Base
{
  public:
  /* pure virtual function : do-nothing function */
  /* Two virtual functions - One vptr */ 
  virtual void Display() = 0;
  virtual void DoNothing() = 0;
};

class Derived : public Base
{
  public:
  void Display()
  {
    cout << "Dervied class instantiated" << endl;  
  }
  
  void DoNothing()
  {
    cout << "Do-Nothing" << endl;
  }
  
  /* Added virtual function - but still pointed by one vptr */
  virtual void AddedVirtualFunction()
  {
    cout << "AddedVirtualFunction" << endl; 
  }
  
  private:
  int a;
};

class GrandDerived : public Base
{
  public:
  void Display()
  {
    cout << "GrandDerived class instantiated" << endl;
  }
  
  void DoNothing()
  {
      cout << "Do-Nothing" << endl;
  }
};

int main()
{
    // Base b; error : cannot declare object of abstract class
    
    Derived dptr;
    GrandDerived gdptr;  
    
    cout << sizeof(dptr) << endl; // 16 vptr and int
    cout << sizeof(gdptr) << endl; // 8 vptr
    
    return 0;
}