/*****************************************************************************
Operator overloading 2024.
Functionality : Binary member '=' operator overloading.
*******************************************************************************/

#include <iostream>

using namespace std;

class Sample
{
private:
  int a;
  int b;

public:

  // '=' operator member function
  void operator = (Sample& s);

  Sample (int x, int y)
  {
	a = x;
	b = y;
  }

  Sample ()
  {
    // default constructor since parameterized constructor is used.
  }

  void Display ()
  {
	cout << a << " " << b << endl;
  }
};

void Sample::operator = (Sample& s)
{
    this->a = s.a;
    this->b = s.b;
}

int main ()
{
  Sample s1(4, 5);
  
  Sample s2 = s1; // overloading '=' operator 
  
  /*********************************************** 
    s1 = s2; 
    s1.operator = (s2); 
    operator = (&s1, s2); 
    operator = (Sample* const this, Sample& s);
  ***********************************************/
  
  s1.Display();
  s2.Display();
  
  return 0;
}
