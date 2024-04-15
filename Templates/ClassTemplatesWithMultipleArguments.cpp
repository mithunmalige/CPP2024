/* Template type - class template usage with multiple templates */
/* Examples of usage of non-class template usage */

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class A
{
    private:
    T1 a;
    T2 b;

    public:
    A(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void Show()
    {
        cout << a << " " << b << endl;
    }
};


int main()
{
    A<int, int> obj1(3, 4);
    obj1.Show();

    A<double, double> obj2(5.8, 7.9);
    obj2.Show();

    A<float, int> obj3(8.8, 9);
    obj3.Show();

    A<int, double> obj4(2, 2.2);
    obj4.Show();

    return 0;
}