/* Template type - non-class template usage */
/* Examples of usage of non-class template usage */

#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    int b;

    public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }

    void Show()
    {
        cout << a << " " << b << endl;
    }
};

class B
{
    private:
    int a;
    int b;

    public:
    B(int x, int y)
    {
        a = x;
        b = y;
    }

    void Show()
    {
        cout << a << " " << b << endl;
    }
};

class C
{
    private:
    int a;
    int b;

    public:
    C(int x, int y)
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
    A a(3, 4);
    a.Show();

    B b(5, 7);
    b.Show();

    C c(8, 9);
    c.Show();

    return 0;
}