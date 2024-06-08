/* Insert a node in sorted linked list */
#include <iostream>
#include <list>
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

    list<int> list1 = {6, 5, 3, 2, 1};
    print(list1);

    list1.sort();
    print(list1);

    auto insertNodeInASortedList = [](std::list<int>& list, int node)
    {
        for (auto l = list.begin(); l != list.end(); l++)
        {
            if (*l > node)
            {
                list.insert(l, node);
                return;
            }
        }
    };

    insertNodeInASortedList(list1, 4);
    print(list1);
    
    return 0;
}