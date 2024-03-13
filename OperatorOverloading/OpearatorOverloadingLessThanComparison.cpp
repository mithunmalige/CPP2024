/*****************************************************************************
Operator overloading 2024.
Functionality : Binary member '<' operator overloading.
*******************************************************************************/

#include <iostream>

using namespace std;

class Sample
{
private:
  int a;
  int b;

public:
  // '<' operator member function
  bool operator < (Sample& s);

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

bool Sample::operator < (Sample& s)
{
    if ((this->a < s.a) && (this->b < s.b))
        return true;
    else
        return false;
}

int main ()
{
  Sample s1(3, 4);
  Sample s2(4, 5);
  s1.Display();
  s2.Display();
  
  /* s1 < s2; s1.operator < (s2); operator < (&s1, s2); operator < (Sample* const this, Sample& s)*/
  if (s1 < s2)
  {
    cout << "s1 is lesser than s2" << endl;
  }
  else
  {
    cout << "s2 is lesser than s1" << endl;
  }
  return 0;
}
