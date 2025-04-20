#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

auto print = [](std::list<int>& my_list)
{
    for (const auto& l : my_list)
        cout << l << " ";
    cout << endl;
};

int main()
{
    std::list<int> myList;
    for (int i = 0; i < 10;)
        myList.push_back(i++);

    print(myList);

    int k;
    cout << "Enter kth node" << endl;
    cin >> k;

    try
    {
        if( k > myList.size() )
        {
            cout << "The position entered is out of range" << endl;
            throw;
        }
    }
    catch(std::out_of_range& e)
    {
        cout << e.what() << endl;
    } 

    auto position = myList.size() - k;
    cout << position << endl;
    std::list<int>::iterator iter = myList.begin();
    std::advance(iter, position);
    myList.erase(iter);

    print(myList);

    myList.push_back(2);
    print(myList);

    myList.remove(2);
    print(myList);

    myList.insert(myList.begin(), 100);
    print(myList);

    std::list<int>::iterator it = myList.begin();
    std::advance(it, 5);
    myList.insert(it, 500);
    print(myList);

    myList.erase(myList.begin());
    print(myList);

    auto it2 = myList.begin();
    std::advance(it2, 4);
    myList.erase(it2);
    print(myList);

    auto it3 = myList.end();
    myList.erase(--it3);
    print(myList);

    myList.reverse();
    print(myList);

    auto pos = std::find(myList.begin(), myList.end(), 1);
    cout << std::distance(myList.begin(), pos) << endl;

    /* sort the list */
    myList.sort();
    print(myList);

    int m;
    cout << "Enter the element to insert in sorted list" << endl;
    cin >> m;
    for (auto itr = myList.begin(); itr != myList.end(); itr++)
    {
        if (m < *itr)
            myList.insert(itr, m);
    }
    print(myList);

    
    cout << "Append the last nth node to the begining of the list" << endl;
    int n = 3;
    std::list<int> splicedList;
    auto itr = myList.begin();
    int posi = myList.size() - n;
    std::advance(itr, posi);
    splicedList.splice(splicedList.begin(), myList, itr, myList.end());
    print(splicedList);
    myList.splice(myList.begin(), splicedList);
    print(myList);

    // void splice(iterator, list, iterator_to_the_new_list, iterator_end to the new_list)

    cout << "Delete alternative nodes in linked list" << endl;
    auto itr1 = myList.begin();
    while (itr1 != myList.end())
    {
        itr1 = myList.erase(itr1);
        itr1++;
    }
    print(myList);



    return 0;
}
