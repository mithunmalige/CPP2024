#include <iostream>
#include <memory>

using namespace std;

class A
{
    public:
    A()
    {
        cout << "A created" << endl;
    }

    ~A()
    {
        cout << "A destructed" << endl;
    }

    void SetA(int value)
    {
        cout << value << endl;
        this->a = value;
    }

    void GetA()
    {
        cout << a << endl;
    }

    private:
    int a;
};

void fun()
{
    std::unique_ptr<A> p1 = std::make_unique<A>();
    p1->SetA(13);

    std::unique_ptr<A> p2 = std::move(p1);
    p2->GetA();
}

int main()
{
    fun();
    return 0;
}