#include <iostream>
using namespace std;
int main()
{
    char a[] = {'a', 'b', 'c', 'd', 'e'};
    int n = sizeof(a) / sizeof(char);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}