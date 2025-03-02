#include <iostream>
using namespace std;

struct Point
{
    int a;
    int b;
};

struct TablePosition
{
    Point p;
    Point q;
};

int main()
{
    Point p1 = {.a = 2, .b = 4};
    Point p2 = {.a = 4, .b = 5};
    
    TablePosition t1 = {.p = {.a = 3, .b = 4}, .q = {.a = 1, .b = 6}};
    
    
    
    return 0;
}
