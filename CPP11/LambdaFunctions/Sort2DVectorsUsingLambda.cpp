// Sort 2D vector using lambda functions //

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    /* 2D vector declaration */
    vector<vector<int>> vec = {
        {5, 7},
        {8, 9},
        {1, 2},
        {3, 4}
    };

    sort(vec.begin(), vec.end(), [](vector<int>& a, vector<int>& b)
    {
        return a[1] < b[1];
    });

    auto print = [&]()
    {
        for(int i = 0; i < vec.size(); i++)
        {
            for (int j = 0; j < vec[i].size(); j++)
            {
                cout << vec[i][j] << endl;        
            }
        }
    };

    print();

    return 0;
}