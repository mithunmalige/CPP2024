/* Initializer list - C++11 */

#include <iostream>
#include <initializer_list>
using namespace std;

void Print(std::initializer_list<int> val)
{
    for(auto& v : val)
    {
        cout << v << "\t";
    }
    cout << endl;
}

class MyVector
{
    private:
    std::initializer_list<int> myVec;

    public:
    MyVector(const std::initializer_list<int>& vec)
    {
        myVec = vec;
    }

    void Display()
    {
        Print(myVec);
    }
};

int main()
{
    Print({1, 2, 3, 4, 5});

    MyVector vec = {1,2,3,4,5};
    vec.Display();

    return 0;
}

