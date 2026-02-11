#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    // cout << a.size();
    cout << a.size();
    // cout << a.capacity();
    cout << a.capacity();
    a.pop_back();
    // a.insert(int a.begin()+a.size()/2,6)
    // a.insert(a.begin() + 2, 98);
    // a.insert(a.end() - 2, 3) for (int i = 0; i < a.size(); i++)
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    // cout << a.front() << endl;
    // cout << a.back() << endl;
    reverse(a.begin(), a.end());
    sort(a.begin(), a.end());

    return 0;
}