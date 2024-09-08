#include <iostream>
#include <thread>

using namespace std;

//Let us find the thread id.
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

    
    cout << "Thread id of thread t1 = " << t1.get_id() << endl; //non-executing thread.

    cout << "Thread id of thread t2 = " << t2.get_id() << endl; // executing thread.

    if (t2.joinable())
        t2.join();

    if (t1.joinable())
        t1.join();
    
    
    cout << "Thread id of thread t2 = " << t2.get_id() << endl; // non-executing thread.

    cout << "String in Main function = " << s << endl;
    cout << "thread id of main = " << std::this_thread::get_id() << endl;

    return 0;
}


