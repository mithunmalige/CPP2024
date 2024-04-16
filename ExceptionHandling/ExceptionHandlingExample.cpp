/* Exception Handling : 2024 */
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
        cout << "Caught exception = " << x << endl;
    }
}
