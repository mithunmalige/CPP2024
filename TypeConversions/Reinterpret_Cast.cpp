/* Reinterpret-Cast 2024*/

#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int *b = &a;
    cout << *b << endl;

    void* p = &a;
    // cout << *p << endl; error - not a pointer to object type.

    int* q = reinterpret_cast<int*>(p);
    cout << *q << endl;

    return 0;
}