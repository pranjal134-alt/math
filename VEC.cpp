#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    cout << a << endl;
    cout << *p << endl;
    *p = 20;
    cout << a << endl;
    cout << *p << endl;
    return 0;
}
