/* Check the sub-list in list */
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

    list<int> list2 = {5, 4};
    print(list2);

    auto pos = std::search(list1.begin(), list2.end(),
        list2.begin(), list2.end());

    if(pos == list1.end())
        cout << "The list doesn't contains the sub-list" << endl;
    else
        cout << "Yes, the list contains sub-list" << endl;

    return 0;
}