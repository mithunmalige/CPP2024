

// CPP program to demonstrate use of 
// std::vector::reserve 
#include <iostream>
#include <vector>
 
using std::vector;
using std::cout;
using std::endl;
 
int main()
{
    auto print = [](vector<int>& vec)
    {
        for (auto itr = vec.begin(); itr != vec.end(); itr++)
        {
            cout << *itr << "\t";
        }
        cout << endl;
    };

    vector<int> v1(5, 10);
    print(v1);

    v1.assign(2, 5);
    print(v1);

    v1.push_back(20);
    print(v1);

    v1.pop_back();
    print(v1);

    v1.insert(v1.begin(), 14);
    print(v1);

    v1.insert(v1.begin() + 2, 4, 100);
    print(v1);

    vector<int> v2 = { 88, 88, 88, 88};
    v1.insert(v1.begin() + 3, v2.begin(), v2.end());
    print(v1);

    v1.erase(v1.begin()+1);
    print(v1);

    v1.erase(v1.begin() + 2, v1.begin() + 6);
    print(v1);

    print(v2);
    v2.clear();
    print(v2);
    cout << "The size of v2 = " << v2.size() << endl;

    v1.emplace(v1.begin(), 44);
    print(v1);

    v1.emplace_back(45);
    print(v1);

    return 0;
}