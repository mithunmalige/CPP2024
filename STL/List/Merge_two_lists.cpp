/* Merge two lists into one */
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

    list<int> list2 = {3, 6, 8, 2, 1};
    print(list2);

    list1.merge(list2);
    print(list1);

    return 0;
}