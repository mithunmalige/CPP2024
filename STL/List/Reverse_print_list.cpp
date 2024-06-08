/* Print linked list from end */
#include <iostream>
#include <list>

using namespace std;


int main()
{
    auto print = [](list<int>& list)
    {
        for (auto it = list.begin(); it != list.end(); it++)
        {
            cout << *it << "\t";
        }
        cout << endl;
    };

    list<int> list1 = {1, 2, 3, 4, 5};
    print(list1);

    auto reverse_print = [](list<int>& list)
    {
        for (std::list<int>::reverse_iterator it = list.rbegin(); it != list.rend(); it++)
        {
            cout << *it << "\t";
        }
        cout << endl;
    };

    reverse_print(list1);

    return 0;
}