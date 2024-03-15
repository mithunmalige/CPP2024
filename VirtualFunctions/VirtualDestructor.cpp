/*****************************************************************************
Operator overloading 2024.
Functionality : Dynamic polymorphism - virtual destructor
*******************************************************************************/

#include <iostream>
using namespace std;

class Base
{
  public:
  Base()
  {
    cout << "Base constructor" << endl;
  }
  
  virtual ~Base()
  {
    cout << "Base destructor" << endl; 
  }
};

class Derived : public Base
{
  public:
  Derived()
  {
    cout << "Derived constructor" << endl; 
  }
  
  ~Derived()
  {
    cout << "Derived destructor" << endl;
  }
};

int main()
{
    /* 
        Without using virtual destructor there will be memory leak 
        for not deleting derived destructor 
    */
    Base *bptr = new Derived();
    delete bptr;
    
    return 0;
}