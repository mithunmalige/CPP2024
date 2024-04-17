/* Exception Handling : No catch block - compilation fails */
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
}
