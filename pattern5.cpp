#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    char ch = 'a';
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
    return 0;
}