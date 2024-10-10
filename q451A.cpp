#include <bits/stdc++.h>
using namespace std;

string check(int n, int m)
{
    int ans = min(n, m);
    if (ans % 2 == 0)
    {
        return "Malvika";
    }
    return "Akshat";
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << check(n, m) << endl;
    return 0;
}