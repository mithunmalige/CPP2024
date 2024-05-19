/* Vector - Complete analysis */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto print = [](vector<int>& vec){
        for(auto p = vec.begin(); p != vec.end(); p++)
        {
            cout << *p << "\t";
        }
        cout << endl;
    };

    /*Initialization of vectors*/
    vector<int> v1 = { 1, 2, 3, 4, 5};
    cout << "Initialization with initializer list" << endl;
    print(v1);

    vector<int> v2(5, 10);
    cout << "Initialization with defining size and initializing same element" << endl;
    print(v2);

    vector<int> v3(v1);
    cout << "Initialization from another vector" << endl;
    print(v3);

    /*begin and end*/
    vector<int>::iterator itr1 = v1.begin();
    cout << "The begin() = " << *itr1 << endl;
    *itr1 = 89; // can modify if we use only begin() but not the same case with cbegin();
    cout << "The begin() = " << *itr1 << endl;
    print(v1);

    vector<int>::const_iterator itr2 = v1.cbegin();
    cout << "The cbegin() = " << *itr2 << endl;
    //*itr2 = 1; // compilation error, cannot modify with iterator.

    vector<int>::reverse_iterator itr3 = v1.rbegin();
    cout << "The rbegin() = " << *itr3 << endl;

    vector<int>::const_reverse_iterator itr4 = v1.crbegin();
    //*itr4 = 99; // compilation error
    cout << "The crbegin() = " << *itr4 << endl;

    /*similarly for end(), rend(), cend(), crend()*/
    return 0;

    
}


