#include <iostream>
#include <thread>

using namespace std;

void threadFun(int x)
{
    cout << "I recevied " << x << endl;
    cout << "I am in thread function" << endl;
}

int main()
{
    thread t1(&threadFun, 4);
    t1.detach();
    
    if (t1.joinable()) 
        t1.join();
    
    return 0;
}

