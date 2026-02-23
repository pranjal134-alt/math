// binary search
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        arr[i] += i;
    }
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}