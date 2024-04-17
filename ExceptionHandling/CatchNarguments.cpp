/* Exception Handling : Multiple catch blocks */
#include <iostream>
using namespace std;
void Check(int x);

void Check(int x) 
{ 
	try 
	{
			if(x == 1)
			{ 
				throw 1; 
			} 
			else if 
			(x == 2) 
			{ 
				throw 2.2; 
			}
      else if (x == 3) 
      { 
      	throw 'c'; 
      }     
  } 
  catch(...) 
  { 
	   cout << "I am in exception" << endl; 
  } 
}

int main()
{
    cout << "I am in main function" << endl;
    Check(1);
    Check(2);
    Check(3);

    return 0;
}
