#include <bits/stdc++.h>
using namespace std;

int check(string s, int n)
{
    vector<int> v(n + 1);
    unordered_map<int, int> m;

    if (s[0] == '<')
    {
        v.push_back(1);
    }
    else
    {
        v.push_back(2);
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '>')
        {
            v[i] = v[i - 1] + 1;
        }
        else
        {
            v[i] = v[i - 1] - 1;
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
        string s;

        int ans = (s, n);
        cout << ans << endl;
    }
    return 0;
}
