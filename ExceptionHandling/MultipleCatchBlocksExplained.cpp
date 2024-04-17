/* Exception Handling : Multiple catch blocks */
#include <iostream>
using namespace std;

int main()
{
    int i = 4; 
    int j = 0;

    try
    {
        if (j != 0)
        {
            cout << "The value of i/j is = " << i/j << endl;
        }
        else
        {
            throw j;
        }
    }
    catch(int x)
    {
        cout << "Cannot be divided by integer 0" << endl;
    }

    catch(double x)
    {
        cout << "Cannot be divided by double 0" << endl;
    }

    catch(char c)
    {
        cout << "Cannot be divided by char 0" << endl;
    }
}
