#include <iostream>
#include <thread>

using namespace std;

// calling an empty function.
void threadFun(int x)
{
    cout << "I recevied " << x << endl;
    cout << "I am in thread function" << endl;
}

int main()
{
    // calling an empty function.
    thread t1(&threadFun, 4);
    
    if (t1.joinable()) 
        t1.join();
    
    return 0;
}

