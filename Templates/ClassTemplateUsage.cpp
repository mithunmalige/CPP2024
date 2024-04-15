/* Template type - non-class template usage */
/* Examples of usage of non-class template usage */

#include <iostream>
using namespace std;

template <typename T>
class A
{
    private:
    T a;
    T b;

    public:
    A(T x, T y)
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
    A<int> a(3, 4);
    a.Show();

    A<double> b(5.8, 7.9);
    b.Show();

    A<float> c(8, 9);
    c.Show();

    return 0;
}