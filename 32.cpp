#include <iostream>
using namespace std;
int main()

{
    int i, j, n;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}