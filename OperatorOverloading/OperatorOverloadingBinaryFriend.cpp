/*****************************************************************************
Operator overloading 2024.
Functionality : Binary friend member function operator overloading.
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
  friend Sample operator + (Sample& s1, Sample& s2);

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

Sample operator + (Sample& s1, Sample& s2)
{
    Sample s3;
    
    s3.a = s1.a + s2.a;
    s3.b = s1.b + s2.b;
    
    cout << "operator overloading using friend member function" << endl;
    return s3;
}

int main ()
{
  Sample s1(3, 4);
  Sample s2(4, 3); 
  s1.Display();
  s2.Display();
  Sample s3;            // default constructor instantiation.
  s3 = s1 + s2;         // s1.operator + s2; operator + (s1, s2) --> friend Sample operator + (Sample&, Sample&);
  s3.Display();

  return 0;
}