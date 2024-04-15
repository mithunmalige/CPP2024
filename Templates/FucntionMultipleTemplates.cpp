/* Template type - Use both multiple-template based and ordinary overloads */
/* Examples of usage of function templates */

#include <iostream>
using namespace std;

/* 
Criteria :
1. Function shud have same number of arguments.
2. Should do the same functionality.
*/

template <typename T1, typename T2>
void Show(T1 a, T2 b)
{
    cout << "I am in template based function definition" << endl;
    cout << a << " " << b << endl;
}

void Show(double a, double b)
{
    cout << "I am in normal function definition" << endl;
    cout << a << " " << b << endl;
}

int main()
{
    Show(3, 4.7);     // uses template ones.
    Show(3.3, 4.4); // uses double ones.
    Show(4, 5.8);     // uses template ones.

    return 0;
}