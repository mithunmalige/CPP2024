#include <iostream>
#include <thread>

using namespace std;

void ThreadFunction(std::string& str)
{
    cout << "String in Thread Function  = " << str << endl;
    str[0] = 'R';
}

int main()
{
    std::string s("Mithun Malige");
    std::thread t1(&ThreadFunction, std::ref(s));
    

    std::thread t2 = std::move(t1);


    if (t2.joinable())
        t2.join();

    if (t1.joinable())
        t1.join();
    

    cout << "String in Main function = " << s << endl;
    cout << "thread id of main = " << std::this_thread::get_id() << endl;

    // number of threads = 2;
    cout << "number of threads = " << std::thread::hardware_concurrency() << endl;

    return 0;
}


