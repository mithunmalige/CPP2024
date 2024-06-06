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

    // Insert at first
    list.push_front(100);
    print(list);

    // Insert at last
    list.push_back(100);
    print(list);

    // Insert at middle
    std::list<int>::iterator iter = list.begin();
    std::advance(iter, list.size()/2);
    list.insert(iter, 100);
    print(list);

    return 0;
}