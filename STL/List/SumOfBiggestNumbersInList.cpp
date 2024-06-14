/* Sum of biggest numbers in list */
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

    list<int> list1 = {1, 2, 3, 4, 5};
    print(list1);

    list<int> list2 = {30, 8, 65, 54, 100};
    print(list2);

    int maxOfList1 = *max_element(list1.begin(), list1.end());
    cout << maxOfList1 << endl;

    int maxOfList2 = *max_element(list2.begin(), list2.end());
    cout << maxOfList2 << endl;

    cout << "Sum of two biggest numbers:";
    cout << maxOfList1 + maxOfList2 << endl;

    return 0;
}