/****************************************************************************************
Operator overloading 2024.
Functionality : Binary friend/member function operator overloading upon constant int.
*****************************************************************************************/

#include <iostream>
using namespace std;

class Sample
{
private:
  int a;
  int b;

public:
  // operator memebr function to handle constants
  Sample operator + (const int s1);

  // operator friend function to handle constants
  friend Sample operator + (const int s1, Sample& s2);

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

Sample operator + (const int s1, Sample& s2)
{
    Sample s3;
    
    s3.a = s1 + s2.a;
    s3.b = s1 + s2.b;
    
    return s3;
}

Sample Sample::operator + (const int s1)
{
    Sample s3;
    
    s3.a = s1 + this->a;
    s3.b = s1 + this->b;
    
    return s3;
}

int main ()
{
  Sample s1(3, 4);
  s1.Display();
  Sample s3;            // default constructor instantiation.
  s3 = 6 + s1;          // s1.operator + s2; operator + (s1, s2) --> friend Sample operator + (Sample&, Sample&);
  s3.Display();
  
  s3 =  s1 + 6;         // s1.operator + 6; operator + (&s1, 6) --> Sample operator + (Sample * const this, const int);
  s3.Display();
  return 0;
}