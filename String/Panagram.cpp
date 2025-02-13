/* Check whether the string is panagram or not */
#include <iostream>
#include <string>

using namespace std;

bool IsPanagram(std::string& s)
{
    bool found = false;
    for (int ch = 'a'; ch <= 'z'; ch++)
    {
        found = false;
        for(int i = 0; i < s.length(); i++)
        {
            if (ch == tolower(s[i]))
            {
                found = true;
                break;
            }
        }

        if (found == false)
            return false;
    }

    return found;
}

int main()
{
    std::string str = "The quick brown fox jumps over the lazy dog";
    if(IsPanagram(str))
        cout << "Yes, It is a panagram";
    else
        cout << "No, It is not a panagram";

    return 0;
}
