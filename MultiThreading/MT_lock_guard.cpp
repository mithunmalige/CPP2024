/* Thread using lambda function */

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;

std::mutex mtx;

int interval = 2;

void AddToList(std::vector<int>& vec, int max, int start)
{
    std::lock_guard<mutex> guard(mtx);
    for (int i = 0; i < max; i++) 
    {
		if( (i % interval) == 0) 
            vec.push_back(i);
	}
}

void PrintList(std::vector<int>& vec)
{
    std::lock_guard<mutex> guard(mtx);
    for (auto& v : vec )
    {
        cout << v << " ";
    }
}

int main()
{
    std::vector<int> vec(100, 0);

    std::thread t1(AddToList, std::ref(vec), 100, 1);
    std::thread t2(AddToList, std::ref(vec), 100, 10);
    std::thread t3(PrintList, std::ref(vec));

    t1.join();
    t2.join();
    t3.join();

    return 0;
}

