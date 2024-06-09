/* Clone the list from random iterator */
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
    list1.reverse();
    print(list1);

    int n;
    cout << "Select the node from which you want to Clone" << endl;
    cin >> n;

    list<int> list2;
    auto iter = list1.begin();
    advance(iter, n);
    list2.splice(list2.begin(), list1, iter, list1.end());

    print(list2);

    return 0;
}