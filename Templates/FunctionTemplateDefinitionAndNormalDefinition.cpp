/* Template type - Use both template based and ordinary overloads */
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
    Show(3, 4);     // uses template ones.
    Show(3.3, 4.4); // uses double ones.
    Show(4, 5);     // uses template ones.

    return 0;
}
