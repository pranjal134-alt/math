#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {7};
    int s = sizeof(arr) / sizeof(int);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
