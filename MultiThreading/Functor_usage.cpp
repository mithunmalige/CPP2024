#include <iostream>
#include <thread>

using namespace std;

class MyFunctor
{
    public:
    void operator () (int x)
    {
        cout << "I received " << x << endl;
        cout << "I am in Functor" << endl;
    }
};

int main()
{
    MyFunctor functor;
    thread t1(functor, 4);

    if (t1.joinable()) 
        t1.join();
    
    return 0;
}

