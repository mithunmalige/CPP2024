/* Thread using lambda function */

#include <iostream>
#include <thread>

using namespace std;

int main()
{
    std::thread t1([]()
    {
        cout << "Thread executed" << endl;
    });

    t1.join();

    cout << "Main function executed" << endl;

    cout << "Number of threads = " << std::thread::hardware_concurrency() << endl;
    return 0;
}

