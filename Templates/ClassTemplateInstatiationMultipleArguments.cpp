/* Templates 2024 - Multiple class template instantiation */

#include <iostream>
using namespace std;

template <class T1, class T2>
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

    void Show();
};

template <class T1, class T2>
void A<T1, T2>::Show()
{
    cout << "a = " << a << " " << "b = " << b << endl;
}

int main()
{
    A<int, double> a1(3, 7.7);
    a1.Show();

    A<double, char> a2(4.4, 'c');
    a2.Show();

    return 0;
}