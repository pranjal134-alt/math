#include <iostream>
#include <vector>
#include <algothrim>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 2, 1, 3};
    //   v.push_back(1);
    // v.push_back(1);
    // v.push_back(4);
    // sort(v.begin(), v.end());
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}