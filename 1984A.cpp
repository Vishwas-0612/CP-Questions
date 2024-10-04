#include <bits/stdc++.h>
using namespace std;

string check(vector<int> v, int n)
{
    int mid = (0 + (n - 1)) / 2;
    if (v[mid] == v[0] && v[mid] == v[n - 1])
    {
        return "NO";
    }
    string s;
    for (int i = 0; i < n; i++)
    {
        if (i == mid)
        {
            s.push_back('R');
        }
        else
        {
            s.push_back('B');
        }
    }
    cout << "YES" << endl;
    // cout << s;
    return s;
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

        string ans = check(v, n);
        cout << ans << endl;
    }
    return 0;
}