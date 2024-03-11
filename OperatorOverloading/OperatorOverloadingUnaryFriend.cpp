/*****************************************************************************
Operator overloading 2024.
Functionality : Unary friend operator overloading.
*******************************************************************************/

#include <iostream>

using namespace std;

class Sample
{
private:
  int a;
  int b;

public:
  // operator member function
  friend void operator - (Sample& sample_);

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

friend void operator - (Sample& sample_)
{
  a = -(sample_.a);
  b = -(sample_.b);
}

int
main ()
{
  Sample s (3, 4);
  s.Display ();
  -s;							// s.operator - (); operator - (&s) --> friend void operator - (Sample& s);
  s.Display ();

  return 0;
}
