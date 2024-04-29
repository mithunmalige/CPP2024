/* Need of lambda Function - 2024 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* Why separate function ? */
void Print(int i)
{
    cout << i << "\t";
}

/* Why separate function ? */
void Assign(int& i)
{
    static int n = 1;
    i = n++;

    Print(i);
}

int main()
{
    std::vector<int> vec(10);

    for_each(vec.begin(), vec.end(), Print);
    cout << endl;
    for_each(vec.begin(), vec.end(), Assign);

    return 0;
}