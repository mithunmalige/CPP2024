#include <iostream>
#include <thread>

using namespace std;

//string is getting copied
// using reference : std::ref(s); --> prints whatever modified in ThreadFunction.
// move the ownership : std::move(s); -->  main thread will not get printed.
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

    return 0;
}


