/* Deep copy works for pointers - 2024 */

#include <iostream>
#include <string.h>
using namespace std;

class DeepCopy
{
    private:
    int a;
    char* str;

    public:
    DeepCopy() = default;

    DeepCopy(DeepCopy& obj)
    {
        a = obj.a;
        str = new char[strlen(obj.str)];
        strcpy(str, obj.str);
    }

    void Set(int x, const char* strObj)
    {
        str = new char[25];
        strcpy(str, strObj);
        a = x;
    }

    void Display()
    {
        cout << "The value of a = " << a << endl;
        cout << "The string is = " << str <<  endl;
    }

    void Change()
    {
        a = 3;
        str[0] = 'R';
    }
};

int main()
{
    DeepCopy dC;
    dC.Set(2, "Mithun");
    dC.Display();

    DeepCopy dC1 = dC;
    dC1.Display();

    dC.Change();
    dC.Display(); // Rithun
    dC1.Display(); // Mithun expected.

    return 0;
}