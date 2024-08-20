#include <iostream>
#include <memory>

using namespace std;

class A
{
    public:
    void show()
    {
        cout << "A::Show()" << endl;
    }
};

int main()
{
    std::unique_ptr<A> p1(new A);
    p1->show();
    cout << p1.get() << endl;

    std::unique_ptr<A> p2 = std::move(p1);
    p2->show();
    cout << p1.get() << endl;
    cout << p2.get() << endl;

    return 0;
}