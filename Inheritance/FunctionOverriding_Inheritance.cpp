/* Function overriding 2024 */
#include <iostream>
using namespace std;

class Parent
{
    protected:
    int x = 8;

    public:
    void Show()
    {
        cout << x << endl;
        cout << "I am Parent" << endl;
    }
};

class Child : public Parent
{
    public:
    void Show()
    {
        x = 9;
        cout << "I am child" << endl;
    }
};

int main()
{
    /// Function overriding : same fucntion name with signature
    Parent p;
    p.Show(); // I am parent

    Child c;
    c.Show(); // I am child

    // call base class function from child class object.
    c.Parent::Show(); // 9, I am parent(explained below).

    //Parent::Show(Child* const c);
    //{
    //   cout << c->x << endl; // Hence prints 9 and not 8.
    //}

    return 0;
}