/* Call normal functions from lambda functions - 2024 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Foo()
{
    cout << "Foo" << endl; 
}

void Boo()
{
    cout << "Boo" << endl;
}

int main()
{
    auto f = [](){
        Foo();
        Boo();
    };

    f(); // instantiate lambda function.

    /* Print vector */
    std::vector vec(5, 99);
    for_each(vec.begin(), vec.end(), [](int i){ cout << i << endl;});

    return 0;
}