// Diagonal Traversal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int d = 0; d < r + c - 1; d++)
    {
        int row = d < c ? 0 : d - c + 1;
        int col = d < c ? d : c - 1;
        while (row < r && col >= 0)
        {
            cout << v[row][col] << " ";
            row++;
            col--;
        }
    }
    return 0;
}
