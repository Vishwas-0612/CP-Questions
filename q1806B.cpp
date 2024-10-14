#include <bits/stdc++.h>
using namespace std;

int check(vector<int> v, int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    if (m[0] <= (n / 2) + (n % 2))
    {
        return 0;
    }
    else
    {
        if (m[0] + m[1] == n && m[0] != 0 && m[1] != 0)
        {
            if (m[0] >= (n / 2) + (n % 2))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = check(v, n);
        cout << ans << endl;
    }
    return 0;
}