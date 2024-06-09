/* List is palindrome or not */
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

    list<int> list1 = {1, 2, 3, 4, 1};
    print(list1);

    std::list<int>::iterator iter = list1.begin();
    std::list<int>::reverse_iterator riter = list1.rbegin();

    while (iter != list1.end())
    {
        if (*iter == *riter)
        {
            iter++;
            riter++;
        }
        else
        {
            cout << "The list is not palindrome";
            return 0;
        }
    }
    cout << "The list is palindrome" << endl;

    return 0;
}