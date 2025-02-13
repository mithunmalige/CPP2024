/* k-anagrams */

#include <iostream>
#include <unordered_map>
using namespace std;

bool AreKAnagrams(string str1, string str2, int k)
{
    if (str1.length() != str2.length())
        return false;
    
    std::unordered_map<char, int> map;
    for (int i = 0; i < str1.length(); i++)
    {
        char ch = str1[i];
        map[ch]++;
    }
        

    for (int i = 0; i < str2.length(); i++)
    {
        char ch = str2[i];
        
        if(map[ch] > 0)
            map[ch]--;
    }
        
    int count = 0;
    for (auto it : map)
    {
        count = count + it.second;
    }
        

    cout << count << endl;
    if (count > k) 
        return false;
    else
        return true;

    return false; 
}

int main()
{
    string str1 = "grammar";
    string str2 = "anagram";
    int k;
    cin >> k;

    if (AreKAnagrams(str1, str2, k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
