#include <bits/stdc++.h>
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace std;
#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
int main()
{
    FAST_IO;
    ll n, k;
    cin >> n >> k;

    ll cnt_even = n / 2;
    ll cnt_odd = n - cnt_even;

    if (k <= cnt_odd)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        k = k - cnt_odd;
        cout << 2 * k << endl;
    }
    return 0;
}