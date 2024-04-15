/* Template type - non-usage of template example */
/* Examples of non-usage of function templates */

#include <iostream>
using namespace std;

void Show(int a, int b)
{
    cout << a << " " << b << endl;
}

void Show(double a, double b)
{
    cout << a << " " << b << endl;
}

int main()
{
    Show(3, 4);
    Show(3.3, 4.4);
    Show(4, 5);
}