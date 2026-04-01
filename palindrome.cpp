#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int len = s.length();
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
