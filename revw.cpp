#include <iostream>
using namespace std;
int main()
{
    int arr[][4] = {
        {1, 5, 9, 13}, {2, 6, 10, 14}, {3, 7, 11, 15}, {4, 8, 12, 16}};

    int row = sizeof(arr) / (sizeof(int) * sizeof(int));
    int col = sizeof(arr[0]) / (sizeof(int));

    int i = 0, j = 0;
    while (i < row)
    {
        cout << arr[i][j];
        i++;
    }
    while (j < col)
    {
        cout << arr[j][i];
        j++;
    }

    if
    {
        j = j - 1;
        while (j >= 0)
        {
            cout << arr[j][i];
            j--;
        }
        // j++;
    }
    i++;

    return 0;
}