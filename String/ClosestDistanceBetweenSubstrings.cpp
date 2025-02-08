/* Find the closest distance between sub-strings */ 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

auto findClosestDistance = [](const std::vector<std::string>& v, const string& word1, 
                                const string& word2)->int
{
    int ans = INT_MAX;
    int d1 = -1;
    int d2 = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (word1 == v[i])
            d1 = i;
        if (word2 == v[i])
            d2 = i; 
    }

    ans = std::min(ans, std::abs(d1-d2));
    return ans;
};

int main()
{
    string str("The fox has the flesh in its hands");
    
    std::stringstream ss(str);
    std::vector<std::string> vec;
    std::string word;

    while(getline(ss, word, ' '))
    {
        if (!word.empty())
            vec.push_back(word);
    }

    string word1, word2;
    cin >> word1;
    cin >> word2;

    cout << findClosestDistance(vec, word1, word2) << endl;
    return 0;
}
