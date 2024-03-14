/*****************************************************************************
Operator overloading 2024.
Functionality : Binary member '[]' operator overloading.
*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

class Sample
{
private:
  std::string name;

public:
  /* overloading [] operator */
  char& operator [] (int i);

  Sample (std::string nameIn)
  {
	name.assign(nameIn);
  }

  Sample ()
  {
    // default constructor since parameterized constructor is used.
  }

  void Display ()
  {
	cout << name << endl;
  }
};

char& Sample::operator [] (int i)
{
    return (this->name[i]);
}

int main ()
{
  Sample s1("Mithun");
  s1.Display();
  
  /* 
     s1[2] --> s1.operator [2] 
     s1.operator[] (2)
     operator [] (&s1, 2)
     void operator [] (Sample const* this, int i)
  */
  
  s1[2] = 'd';
  s1.Display();
  
  return 0;
}
