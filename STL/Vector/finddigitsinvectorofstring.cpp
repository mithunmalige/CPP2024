// Write a C++ program that takes a vector of strings and returns only those
// strings that contain a number(s). Return an empty vector if none.

#include <algorithm>
#include <cctype>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    std::vector<std::string> vec1 = {"red", "black28", "green"};
    std::vector<std::string> vec2;

    for (const auto& v : vec1) {
        auto iter = std::find_if(v.begin(), v.end(),
                                 [](char c) { return std::isdigit(c); });

        if (iter != v.end()) {
            vec2.push_back(v);
        }
    }

    auto print = [&]() {
        for (const auto& v : vec2) {
            cout << v << " ";
        }
        cout << endl;
    };

    print();

    return 0;
}
