/* Use Lambda functions on Vectors - 2024 */
/* push_back 20, find first greatest number than 5 */
/* count the elements which are greater than 5 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {3,1,7,9};
    vector<int> v2 = {10,3,4,2};


    auto print = [&]()
    {
        cout << "The vector v1 :" << endl;
        for(vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
        {
            cout << *i << "\t";
        }
        cout << endl;

        cout << "The vector v2 :" << endl;
        for(vector<int>::iterator p = v2.begin(); p != v2.end(); p++)
        {
            cout << *p << "\t";
        }
        cout << endl;
    };

    print();

    auto pushBack = [&](int x)
    {
        v1.push_back(x);
        v2.push_back(x);
    };

    pushBack(20);
    cout << "The vector values after push back" << endl;

    print();

    int N = 5;
    vector<int>::iterator greaterN = std::find_if(v1.begin(), v1.end(), [N](int a){
        return a > N;
    });

    cout << "The first element greater than 5 in vector v1 = " << *greaterN << endl;


    auto greaterNValues = std::count_if(v2.begin(), v2.end(), [=](int a){
        return a > N;
    });

    cout << "The number of elements greater than 5 in vector v2 = " << greaterNValues << endl;
    return 0;
}