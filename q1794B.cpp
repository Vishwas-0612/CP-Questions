#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> check(vector<ll> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            v[i] += 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] % v[i - 1] == 0)
        {
            v[i]++;
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
        int n;
        cin >> n;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> ans = check(v);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}