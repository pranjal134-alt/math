#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec = {23, 45};
    vector<int> vec(5, 3);
    // cout << vec[0];
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << vec.empty() << endl;
    cout << vec.at(2) << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.pop_back() << endl;e
    cout << vec.push_back(10) << endl;
    return 0;
}