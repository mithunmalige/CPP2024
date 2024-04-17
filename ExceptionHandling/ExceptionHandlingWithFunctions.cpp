/* Exception Handling : Throwing exception from fucntions */
#include <iostream>
using namespace std;
void Div(int i, int j, int k);

int main()
{
    int i = 3; 
    int j = 0;
    int k = 9;

    try
    {
        Div(i, j, k);
    }
    catch(int x)
    {
        cout << "cannot divide by zero" << endl;
    }
}

void Div(int i, int j, int k)
{
    if (j != 0)
    {
        cout << "The result of division i/j = " << i/j << endl;
    }
    else
    {
        throw j;
    }
}
