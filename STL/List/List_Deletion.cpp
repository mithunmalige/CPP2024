/* List Insertion - 2024 */

#include <iostream>
#include <list>

int main()
{
    std::list<int> list = {1, 2, 3, 4, 5};

    auto print = [](auto& list){
        for (auto& l : list)
            std::cout << l << "\t";

        std::cout << std::endl;    
    };

    print(list);

    // Delete at first
    list.pop_front();
    print(list);

    // Delete at last
    list.pop_back();
    print(list);

    // Delete at middle
    std::list<int>::iterator iter = list.begin();
    std::advance(iter, list.size()/2);
    list.erase(iter);
    print(list);

    // Remove the element
    list.remove(4);
    print(list);

    return 0;
}