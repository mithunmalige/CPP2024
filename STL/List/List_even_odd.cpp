/* Check whether linked list is even or odd */
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1 = {1, 2, 3, 4, 5, 6};
    
    bool isEven = list1.size() % 2 == 0 ? true : false;
    if (isEven)
    {
        cout << "The list is even" << endl;
    } 
    else
    {
        cout << "The list is odd" << endl;
    }

    return 0;
}