/* Shallow copy works for primitive types - 2024 */

#include <iostream>
using namespace std;

class ShallowCopy
{
    private:
    int a;

    public:
    ShallowCopy() = default;

    void SetA(int x)
    {
        a = x;
    }

    void Display()
    {
        cout << "The value of a = " << a << endl;
    }
};

int main()
{
    ShallowCopy sC;
    sC.SetA(2);
    sC.Display();

    ShallowCopy sC1 = sC;
    sC1.Display();

    sC.SetA(3);
    sC1.Display(); // remains 2.
    sC.Display(); // remain 3.

    return 0;
}