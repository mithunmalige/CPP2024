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
    int listSize = list2.size();
    print(list2);

    list1.merge(list2);
    print(list1);

    int mergingPoint = list1.size() - listSize;
    cout << "The merging point in the list is " << mergingPoint << endl;

    return 0;
}