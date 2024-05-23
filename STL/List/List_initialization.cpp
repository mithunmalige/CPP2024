
#include <iostream>
#include <list>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

// list - Ways to initialize
int main()
{
    auto print = [](list<int> list)
    {
        for (auto it = list.begin(); it != list.end(); it++)
        {
            cout << *it << "\t";
        }
        cout << endl;
    };

    list<int> list1 = {1, 2, 3, 4, 5};
    print(list1);

    list<int> list2(5, 100);
    print(list2);

    list<int> list3;
    list3.push_back(1);
    list3.push_back(2);
    list3.push_back(3);
    list3.push_back(4);
    list3.push_back(5);
    print(list3);

    array<int, 5> arr = {1, 2, 3, 4, 5};
    list<int> list4(arr.begin(), arr.end());
    print(list4);

    vector<int> vec = {1, 2, 3, 4, 5};
    list<int> list5(vec.begin(), vec.end());
    print(list5);

    int i = 1;
    list<int> list6(5);
    std::generate(list6.begin(), list6.end(), [&i]() { return i++; });
    print(list6);

    std::fill(list6.begin(), list6.end(), 99);
    print(list6);

    return 0;
}