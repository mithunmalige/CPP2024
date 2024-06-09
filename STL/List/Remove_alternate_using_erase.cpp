/* Remove alternate elements from the list using erase */
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

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
    print(list1);

    auto iter = list1.begin();
    while(iter != list1.end())
    {
        iter = list1.erase(iter);
        ++iter;
    }

    print(list1);

    return 0;
}