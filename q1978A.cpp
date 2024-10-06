#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        int mx = *max_element(v.begin(), v.end() - 1);
        cout << mx + v[n - 1] << endl;
    }
    return 0;
}