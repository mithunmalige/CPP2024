#include <iostream>
#include <thread>
#include <mutex>
#include <deque>
#include <condition_variable>

#define LIMIT 10
int count = 0;
std::deque<int> container;
using namespace std;

std::mutex mtx;
std::condition_variable cv;

void ProducerThread()
{
    while (count < LIMIT)
    {
        std::unique_lock<std::mutex> lck(mtx);
        container.push_back(count++);
        cv.wait(lck, [](){ return (container.size() == 0); }); // if true returns then waits
        cout << "Produced : " << count << endl;

        cv.notify_one();      
    }
}

void ConsumerThread()
{
    while (count < LIMIT)
    {
        std::unique_lock<std::mutex> lck(mtx);
        cv.wait(lck, [](){ return (container.size() != 0); }); // if true returns then waits
        cout << "Consumed : " << count << endl;
        container.pop_back();

        cv.notify_one();
    }
}


int main()
{
    std::thread t1(&ProducerThread);
    std::thread t2(&ConsumerThread);

    t1.join();
    t2.join();

    return 0;
}
