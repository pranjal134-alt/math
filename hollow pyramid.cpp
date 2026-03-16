#include <iostream>
using namespace std;

int main()
{
    int a, b, n = 5;

    for (a = 0; a < n; a++)
    {
        for (b = 0; b < n - a - 1; b++)
        {
            cout << " ";
        }

        cout << "*";

        if (a != 0)
        {
            for (b = 0; b < 2 * a - 1; b++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}