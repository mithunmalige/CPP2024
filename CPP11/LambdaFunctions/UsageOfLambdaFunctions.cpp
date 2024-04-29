/* Need of lambda Function - 2024 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> vec(10);

    for_each(vec.begin(), vec.end(), [](int i){ cout << i << "\t"; });

    cout << endl;
    
    for_each(vec.begin(), vec.end(), [](int& i){
        static int n = 1;
        i = n++;
        cout << i << "\t";
     });

    return 0;
}