#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

#define LIMIT 20
int count = 1;
using namespace std;

std::mutex mtx;
std::condition_variable cv;

void EvenThread()
{
    while (count < LIMIT)
    {
        std::unique_lock<std::mutex> lck(mtx);
        cv.wait(lck, [](){ return (count % 2 == 0); }); // if true returns then waits
        cout << "Even : " << count << endl;
        count++;

        cv.notify_one();      
    }
    
}

void OddThread()
{
    while (count < LIMIT)
    {
        std::unique_lock<std::mutex> lck(mtx);
        cv.wait(lck, [](){ return (count % 2 != 0); }); // if true returns then waits
        cout << "Odd : " << count << endl;
        count++;

        cv.notify_one();
    }
}


int main()
{
    std::thread t1(&EvenThread);
    std::thread t2(&OddThread);

    t1.join();
    t2.join();

    return 0;
}
