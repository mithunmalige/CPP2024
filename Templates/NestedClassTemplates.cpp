/* Templates 2024 - Nested class template instantiation */

#include <iostream>
using namespace std;

class outer
{
    public:

    template <class T>
    class inner
    {
        public:
        inner(T value)
        {
            x = value;
        }

        inner() = default;

        T x;

        void Show()
        {
            cout << "x = " << x << endl;
        }
    };

    inner<int> i1;
    inner<double> i2;

    outer(int val1, double val2)
    {
        i1 = val1;
        i2 = val2;
    }
};

int main()
{
    outer out(5, 20.0);
    out.i1.Show();
    out.i2.Show();

    return 0;
}