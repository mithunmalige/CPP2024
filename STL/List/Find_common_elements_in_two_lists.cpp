/* Find common elements between two lists */
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

    list<int> list1 = {1, 2, 3, 4, 5, 6};
    print(list1);

    list<int> list2 = {2, 4, 6};
    print(list2);


    std::for_each(list2.begin(), list2.end(), [&](int value)
    {
        auto pos = std::find(list1.begin(), list1.end(), value);
        if (pos != list1.end())
            cout << *pos << "\t";
    });

    return 0;
}