/* const-cast 2024 */

#include <iostream>
using namespace std;

class A
{
    private:
    int a;

    public:
    A(int x) : a(x){}

    void UpdateValue() const
    {
        const_cast<A*>(this)->a = 6;
    }

    void Display() 
    {
        cout << a << endl;
    }
};

int main()
{
    A obj(3);
    obj.Display();

    obj.UpdateValue(); // UpdateValue(A* const this) const --> UpdateValue(const A* const this);
    obj.Display();

    return 0;
}