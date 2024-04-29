/* Pass two integers in lambda and get the multiples - 2024 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    /* Implicitly deduce the returned value */
    auto f = [](int x, int y){
         return x * y ;
    };

    cout << f(5, 4) << endl; // instantiate lambda function.

    /* Explicitly declare the return value */
    auto g = [](int x, int y)->int {
        return x * y;
    };

    cout << g(2, 3) << endl; // works since return statement is made explicitly.

    return 0;
}