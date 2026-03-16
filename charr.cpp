#include <iostream>
using namespace std;
int main()
{
    string s;
    //   cin >> s;
    getline(cin, s);
    //  e = s.insert("k")
    cout << s.replace(0, 5, "hi");
    return 0;
}