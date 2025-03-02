#include <iostream>
#include <compare>
using namespace std;

struct Point
{
    int a;
    int b;
    
    auto operator <=> (const Point&) const = default;
};

int main()
{
    Point p1{1, 2};
    Point p2{2, 3};
    Point p3{1, 2};
    
    auto result1 = p1 <=> p2;
    
    if (result1 < 0)
        cout << "p1 is less than p2" << endl;
    else if (result1 > 0)
        cout << "p2 is greater than p1" << endl;
    else
        cout << "p1 is equal p2" << endl;
    
    auto result2 = p1 <=> p3;
    
    if (result2 == 0)
        cout << "p1 and p3 are same" << endl;
    
    
    return 0;
}
