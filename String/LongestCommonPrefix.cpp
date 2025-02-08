/* Find the longest common prefix */ 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

auto findLongestPrefix = [](std::vector<std::string>& v)->std::string
{
    std::sort(v.begin(), v.end());
    auto first = v.front();
    auto last = v.back();

    
    auto min = std::min(first, last);
    return min;
};

int main()
{
    string str("Mith Mit Mithun Mithu Rithu Ai Ait");
    
    std::stringstream ss(str);
    std::vector<std::string> vec;
    std::string word;

    while(getline(ss, word, ' '))
    {
        if (!word.empty())
            vec.push_back(word);
    }

    cout << findLongestPrefix(vec) << endl;
    return 0;
}
