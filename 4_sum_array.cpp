#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    cout << ans << endl;
    return 0;
}