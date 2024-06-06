/* List print in reverse order - 2024 */

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

    // print the list in reverse order
    auto reversePrint = [](auto& list){
        for (auto iter = list.rbegin(); iter != list.rend(); iter++)
            std::cout << *iter << "\t";
    };

    reversePrint(list);

    return 0;
}