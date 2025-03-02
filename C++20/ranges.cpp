#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>

using namespace std;

auto print = [](std::vector<int>& vec)
{
    for (const auto v :  vec)
        cout << v << " ";
    cout << endl;
};

int main()
{
    std::vector<int> vec = {3, 1, 2, 4, 5, 6, 7, 8, 9};
    print(vec);
    
    std::ranges::sort(vec);
    print(vec);
    
    auto even_squared = vec | std::views::filter([](int n) { return n % 2 == 0; }) |
    std::views::transform([](int n) { return n * n; });
    
    for (auto value : even_squared)
        cout << value << " ";
    cout << endl;
    
    auto first_five = vec | std::views::take(5);
    
    for (auto value : first_five)
        cout << value << " ";
    cout << endl;
    
    std::vector<std::string> words = {"apple", "banana", "cherry", "date"};
    auto toUpper = words |
    std::views::filter([](std::string n){ return n.length() < 5; }) |
    std::views::transform([](std::string n) 
    { 
        std::transform(n.begin(), n.end(), n.begin(), ::toupper); 
        return n; 
    });
    
    for (const auto& v : toUpper)
        cout << v << " ";
    cout << endl;
    
    return 0;
}
