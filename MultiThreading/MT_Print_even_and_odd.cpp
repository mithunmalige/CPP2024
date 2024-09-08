#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

std::mutex mtx;
void PrintOddNumbers(int maxValue)
{
    std::lock_guard<mutex> lock(mtx);
    cout << "Printing Odd numbers" << endl;
    for (int i = 0; i < maxValue; i++)
    {
        if (i % 2 == 1)
            cout << i << " ";
    }
    cout << endl;
}

void PrintEvenNumbers(int maxValue)
{
    std::lock_guard<mutex> lock(mtx);
    cout << "Printing even numbers" << endl;
    for (int i = 0; i < maxValue; i++)
    {
        if(i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Printing the numbers from 1 to 100" << endl;
    std::thread t1(PrintOddNumbers, 100);
    std::thread t2(PrintEvenNumbers, 100);

    t1.join();
    t2.join();

    return 0;

}