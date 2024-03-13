/*****************************************************************************
Operator overloading 2024.
Functionality : Binary member '()' operator overloading.
*******************************************************************************/

#include <iostream>

using namespace std;

class Sample
{
private:
  int a;
  int b;

public:
  /* overloading () operator */
  
  void operator () (int x, int y);

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

void Sample::operator () (int x, int y)
{
    this->a = x;
    this->b = y;
}

int main ()
{
  Sample s1;
  
  /*************************************************** 
    s1(4, 5); 
    operator () (4, 5); 
    operator () (Sample* const this, int x, int y);
  ***************************************************/
  s1(4, 5);  // if no operator overloading then this instantiation will fail --> cannot construct.
  
  s1.Display();
  return 0;
}
