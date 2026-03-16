#include <iostream>
using namespace std;
int main()
{
    int n, i, j, num = 1;
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j > 0; j--)
        {
            cout << num << " ";
        }
        cout << endl;
        num++;
    }
    return 0;
}