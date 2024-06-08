/* Erase and remove from a linked list */
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

    list1.reverse();
    print(list1);
    
    // remove the element from the list
    list1.remove(4);
    print(list1);

    // remove from the iterator
    auto iter = list1.begin();
    advance(iter, 1);
    list1.erase(iter);
    print(list1);

    return 0;
}