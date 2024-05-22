

// CPP program to demonstrate use of 
// std::vector::reserve 
#include <iostream>
#include <algorithm>
#include <vector>
 
using std::vector;
using std::cout;
using std::endl;
 
int main()
{
    auto print = [](vector<int>& vec){
        for(auto it = vec.begin(); it != vec.end(); it++)
        {
            cout << *it << "\t";
        }
        cout << endl;
    };

    vector<int> v = {2, 6, 9, 4, 1};
    sort(v.begin(), v.end());
    print(v);

    sort(v.begin(), v.end(), std::greater<int>());
    print(v);

    reverse(v.begin(), v.end());
    print(v);

    int min = *min_element(v.begin(), v.end());
    cout << min << endl;

    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

    auto minmax = minmax_element(v.begin(), v.end());
    cout << *minmax.first << " " << *minmax.second << endl; 

    auto i = std::find(v.begin(), v.end(), 2);
    auto pos = i - v.begin();
    cout << pos << endl;

    return 0;
}