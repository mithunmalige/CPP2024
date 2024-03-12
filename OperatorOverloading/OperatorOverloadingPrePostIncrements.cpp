/*************************************************************************************************
Operator overloading 2024.
Functionality : Unary member operator overloading : pre-increment and post increment operator.
**************************************************************************************************/

#include <iostream>

using namespace std;

class Sample
{
private:
  int a;

public:
   // pre-increment operator member function
   void operator ++ ();
   
   // post-increment operator member function
   void operator ++ (int x);

    Sample (int x)
    {
	    a = x;
    }

    Sample ()
    {
	    // default constructor since parameterized constructor is used.
    }

    void Display ()
    {
	    cout << "a = " << a << endl;
    }
};

void Sample::operator ++ ()
{
    cout << "Pre-increment applied" << endl;
    a = ++a;
}

void Sample::operator ++ (int x)
{
    // operator ++ (&s, int x), x considered as 0 always 
    // for post-increment operator.
    cout << "Post-increment applied" << endl;
    a++;
    a = a;
}

int main ()
{
    Sample s (3);
    s.Display ();
    ++s;							// s.operator ++ (); operator ++ (&s); 
    s.Display ();

    s++;
    s.Display();                    // s.operator ++ (int x = 0); operator ++ (&s, int x) 
    return 0;
}
