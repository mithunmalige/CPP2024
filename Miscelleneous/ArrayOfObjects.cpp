/* Array of Objects explained - 2024 */

#include <iostream>
using namespace std;

class ArrayOfObjects
{
    private:
    int a;
    double b;

    public:
    ArrayOfObjects(int x, double y)
    {
        a = x;
        b = y;
    }

    void Display()
    {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b <<  endl;
    }
};

int main()
{
    ArrayOfObjects ao[5] = { ArrayOfObjects(1, 2.3), ArrayOfObjects(2, 3.4), ArrayOfObjects(3, 4.5),
                            ArrayOfObjects(4, 5.6), ArrayOfObjects(5, 6.7) };

    for (int i = 0; i < 5; i++)
    {
        ao[i].Display();
    }
    
    return 0;
}