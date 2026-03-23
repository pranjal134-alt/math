#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], i;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int smallest;
    for (i = 0; i < n; i++)
    {
        // if (a[i] < smallest)
        //  {
        //        smallest = a[i];
        //      }
        smallest = max(smallest, a[i]);
    }
    cout << smallest << endl;

    return 0;
}