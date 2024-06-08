/* Reverse a linked list */
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

    list<int> list1 = {6, 5, 4, 3, 2, 1};
    print(list1);

    list1.reverse();
    print(list1);
    
    return 0;
}