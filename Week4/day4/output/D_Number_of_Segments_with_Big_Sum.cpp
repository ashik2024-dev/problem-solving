#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0;
    ll sum = 0;
    ll ans = INT_MAX;

    for (ll r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum >= k)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
    }

    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}
