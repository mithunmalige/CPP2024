/* Recursice lambda expressions */

#include <iostream>
#include <functional>
using namespace std;

/* Using normal function */
void PrintReverse(int num)
{
    if (num == 0)
        return ;
    else
    {
        cout << num % 10;
        PrintReverse(num/10); 
    }
}

int main()
{
    int n = 12345;
    PrintReverse(n);

    cout << endl;

    auto printInReverse = [&](auto&& printInReverse){

        if (n == 0)
            return ;
        else
        {
            cout << n % 10;
            n = n / 10;
            printInReverse(printInReverse); 
        }
    };
    printInReverse(printInReverse);
    

    cout << endl;

    function<void()> reversePrint = [&](){
        if (n == 0)
            return ;
        else
        {
            cout << n % 10;
            n = n / 10;
            reversePrint(); 
        }
    };

    reversePrint();

    return 0;
}