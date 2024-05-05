/* Gneralized lambda functions in C++14 */

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    /* Using of auto in arguments as well as return types */
    auto sum = [](auto x, auto y)->auto { return x + y; };
    cout << sum(9, 8) << endl;


    vector<int> vec = {5, 4, 3, 1, 2};

    sort(vec.begin(), vec.end(), [](auto x, auto y)
    {
        return x < y;
    });

    auto print = [&]()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << vec[i] << endl;
        }
    };

    print();

    return 0;
}
