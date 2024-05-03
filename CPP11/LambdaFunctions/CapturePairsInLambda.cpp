/* Capture pairs in lambda - 2024 */

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, string> pair1 = {1, "Mithun"};
    pair<int, string> pair2 = {2, "Lokana"};
    pair<int, string> pair3 = {3, "Malige"};

    auto lambda = [pair1, pair2, pair3]()
    {
        cout << pair1.first << "." << pair1.second << endl;
        cout << pair2.first << "." << pair2.second << endl;
        cout << pair3.first << "." << pair3.second << endl;
    };

    lambda();

    return 0;
}
