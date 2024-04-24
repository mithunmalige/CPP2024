/* Two dimesional array set and get - 2024 */

#include <iostream>
using namespace std;

#define ROW 3
#define COL 3

class TwoDimensionalArray
{
    public:
    int matrix[ROW][COL];

    void Display()
    {
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COL; j++)
            {
                cout << matrix[i][j] << endl;
            }
        }
    }
};

int main()
{
    TwoDimensionalArray arr;
    
    cout << "Enter the values" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr.matrix[i][j];
        }
    }

    arr.Display();
    return 0;
}