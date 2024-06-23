/* Default specifier in cpp */
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

    A() = default;
    A(const A&) = default;
    A& operator = (const A&) = default;
    // A(int x, int y) = default; not a special member function.
    // special member function : copy constructor, copy assignment.

    private:
    int a;
};



int main()
{
    A *aptr = new A(2);
    aptr->Fun1();

    A a(*aptr);
    a.Fun1();

    A b = *aptr;
    b.Fun1();
    
    return 0;
}