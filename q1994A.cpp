#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> check(vector<vector<int>> v, int n, int m)
{
    if (n == 1 && m == 1)
    {
        return {{-1}};
    }
    if (n == 1 && m > 1)
    {
        int num = v[0][0];
        for (int j = 0; j < m - 1; j++)
        {
            v[0][j] = v[0][j + 1];
        }
        v[0][m - 1] = num;
    }
    else if (m == 1 && n > 1)
    {
        int num = v[0][0];
        for (int j = 0; j < n - 1; j++)
        {
            v[j][0] = v[j + 1][0];
        }
        v[n - 1][0] = num;
    }
    else
    {
        vector<int> spare;
        for (int i = 0; i < m; i++)
        {
            spare.push_back(v[0][i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                v[i][j] = v[i + 1][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            v[n - 1][i] = spare[i];
        }
    }
    return v;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<vector<int>> ans = check(v, n, m);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}