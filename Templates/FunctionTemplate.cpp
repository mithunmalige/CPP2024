/* Template type example */
/* Examples of usage of function templates */

#include <iostream>
using namespace std;

/* 
Criteria :
1. Function shud have same number of arguments
2. Should do the same functionality
*/

template <typename T>
void Show(T a, T b)
{
    cout << a << " " << b << endl;
}

int main()
{
    Show(3, 4);
    Show(3.3, 4.4);
    Show(4, 5);
}