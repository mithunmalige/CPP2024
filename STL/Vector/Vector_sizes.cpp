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

    /* Declare vector of size 5*/
    vector<int> v1(5, 10);
    print(v1);

    unsigned int size = v1.size();
    cout << "The vector size = " << size << endl;

    unsigned int maxSize = v1.max_size();
    cout << "The vector max_size = " << maxSize << endl;

    unsigned int capacity = v1.capacity();
    cout << "The capacity = " << capacity << endl;
    for (unsigned int i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    print(v1);
    
    cout << "The capacity = " << v1.capacity() << endl;

    v1.resize(4);
    cout << "After resizing" << endl;
    print(v1);

    cout << "Is vector empty : " << v1.empty() << endl;

    v1.reserve(100);
    print(v1);
    cout << v1.size() << endl;

    v1.shrink_to_fit();
    cout << v1.size() << endl;
    return 0;
}


