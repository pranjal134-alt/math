#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int k;
        cin >> k;
        int ans = 0;
        int l = 1;
        long long h = n;
        while (l <= h)
        {
            long long mid = (l + h) / 2;
            if (pow(mid, k) <= n)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}