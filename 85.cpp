#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int value = 19;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            cout << i - 2;
        }
        cout << endl;
    }
    return 0;
}
for (int i = 1; i <= n; i++)
    if (n % i == 0)
    {
        cnt++;
        if (cnt == k)
        {
            return i;
        }
    }
}
return -1