/* Delete specifier in cpp */
#include <iostream>
using namespace std;
class A final
{
    public:
    virtual void Fun1() 
    {
        cout << a << endl; 
    }

    virtual void Fun2() 
    {
        cout << a << endl;
    }

    A(int x) : a(x){}

    A() = delete;
    A(const A&) = delete;
    A& operator = (const A&) = delete;
    // A(int x, int y) = delete; not a special member function.
    // special member function : copy constructor, copy assignment.

    private:
    int a;
};



int main()
{
    A *aptr = new A(2);
    aptr->Fun1();

    A a(*aptr); // error : the copy constructor assigned with delete.
    a.Fun1();   // which doesn't allow copying.

    A b = *aptr; // error : the copy assignment with delete.
    b.Fun1();    // which doesn't allow from copy assignment.

    return 0;
}