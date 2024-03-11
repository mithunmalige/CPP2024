/*****************************************************************************
Operator overloading 2024.
Functionality : Binary member operator overloading.
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
  Sample operator + (Sample& s);

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

Sample Sample::operator + (Sample& s)
{
    Sample s3;
    
    s3.a = (this->a) + s.a;
    s3.b = (this->b) + s.b;
    
    cout << "operator overloading" << endl;
    return s3;
}

int main ()
{
  Sample s1(3, 4);
  Sample s2(4, 3); 
  s1.Display();
  s2.Display();
  Sample s3;            // default constructor instantiation.
  s3 = s1 + s2;         // s1.operator + s2; operator + (&s1, s2) --> operator + (Sample* const this, Sample&);
  s3.Display();

  return 0;
}
