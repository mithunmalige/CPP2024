#include <iostream>
#include <list>
using namespace std;

std::list<int> ReverseInGroups(const std::list<int>& myList, int count)
{
    std::list<int> mainList;
    std::list<int> groupedList;
    if(count <= 1 || myList.size() < 1)
        return myList;

    auto itr = myList.begin();
    int groupCount = 0;

    while (itr != myList.end())
    {
        while(groupCount < count)
        {
            groupedList.push_back(*itr);
            itr++;
            groupCount++;
        }
        groupCount = 0;
        groupedList.reverse();
        mainList.splice(mainList.end(), groupedList);
    }

    return mainList;
}

auto print = [](const std::list<int>& list)
{
    cout << "head<->" ;
    for (auto& m : list)
        cout << m << "<->";
    cout << "end" <<endl;
};


int main()
{
    std::list<int> myList = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(myList);

    int count;
    cout << "Enter the number to group" << endl;
    cin >> count;

    auto list = ReverseInGroups(myList, count);
    print(list);

    return 0;
}
