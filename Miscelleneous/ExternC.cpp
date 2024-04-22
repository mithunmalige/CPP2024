#include <iostream>
using namespace std;

extern "C"
{
    #include <stdio.h>
    void fun();
}

void fun()
{
    printf("Used C function in C++ source code");
    return;
}

int main()
{
    fun();
    return 0;
}
