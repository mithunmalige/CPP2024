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
    std::shared_ptr<A> p1 = std::make_shared<A>();
    p1->SetA(13);

    std::shared_ptr<A> p2 = p1;
    p2->GetA();

    cout << "Checking the count over reference" << endl;
    cout << p2.use_count() << endl;

    cout << "The addresses of ptrs p1 and p2" << endl;
    cout << p1 << " " << p2 << endl;

    std::shared_ptr<A> p3 = std::make_shared<A>();
    p1.swap(p3);

    cout << "The addresses of ptrs p1 and p3 after swap" << endl;
    cout << p1 << " " << p3 << endl;

    cout << "p2 count : " << p2.use_count() << endl;

    p3.reset();
    cout << "Count after reset : " << p2.use_count() << endl;
}

int main()
{
    fun();
    return 0;
}