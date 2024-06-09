/* Remove odd numbers from the list*/
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

bool Odd(int n)
{
    if (n % 2 != 0)
        return true;
    else
        return false;
}

int main()
{
    auto print = [](std::list<int>& list)
    {
        for (const auto l : list)
        {
            cout << l << "\t";
        }
        cout << endl;
    };

    list<int> list1 = {6, 5, 4, 3, 2, 1};
    list1.reverse();
    print(list1);

    list<int> list2;
    auto sortEvenOdd = [&]()
    {
        for (auto iter = list1.begin(); iter != list1.end(); iter++)
        {
            if(*iter % 2 == 0)
                list2.push_back(*iter);
        }

        for (auto iter = list1.begin(); iter != list1.end(); iter++)
        {
            if(*iter % 2 != 0)
                list2.push_back(*iter);
        }
    };

    sortEvenOdd();

    list1.swap(list2);
    print(list1);
    list2.clear();

    return 0;
}