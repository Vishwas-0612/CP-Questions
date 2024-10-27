#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans;
        if (k <= 2 * (2 * n - 2))
        {
            ans = (k + 1) / 2;
        }
        else
        {
            ans = (k / 2) + 1;
        }
        cout << ans << endl;
    }
    return 0;
}