/* Remove duplications in the list */
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

    for(auto& l : list1)
    {
        list1.push_front(l);
    }
    print(list1);
    
    list1.sort();
    list1.unique();
    print(list1);

    return 0;
}