#include <iostream>
#include <thread>

using namespace std;

class MyFunctor
{
    public:
    void operator () ()
    {
        cout << "I am in Functor" << endl;
    }
};

int main()
{
    thread t1((MyFunctor()));

    cout << "I am in Main" << endl;
    if (t1.joinable()) 
        t1.join();
    
    return 0;
}

