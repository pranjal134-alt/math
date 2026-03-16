#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 3;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << j;
        }
        for (j = i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (j = i - 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}