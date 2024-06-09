/* Find nth node from the end of the linked list */
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

    std::list<int>::reverse_iterator iter = list1.rbegin();
    
    int n;
    cout << "Input the nth node to find out from end :" << endl;
    cin >> n;
    advance(iter, n);
    cout << "The node contains : " << endl;
    cout << *iter << endl;

    return 0;
}