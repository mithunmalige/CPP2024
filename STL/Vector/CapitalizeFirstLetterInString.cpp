// Write a C++ program to capitalize the first character of each element of a given string 
// vector. Return the vector. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    std::vector<std::string> vec = { "red", "black", "green" };
    std::for_each(vec.begin(), vec.end(), [](std::string& str){
        str[0] = static_cast<char>(std::toupper(str[0]));
    });

    auto print = [&](){
        for(const auto& v : vec)    
            cout << v << " ";
        cout << endl;
    };
    
    print();

    return 0;
}
