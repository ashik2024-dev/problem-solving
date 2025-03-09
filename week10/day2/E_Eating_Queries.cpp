#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        vector<ll> pre(n);
        fr cin >> v[i];
        sort(v.rbegin(), v.rend());
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            pre[i] = sum;
        }

        // fr cout << pre[i] << nl;

        for (int i = 0; i < q; i++)
        {
            ll x;
            cin >> x;
            if(x>sum){
                cout << -1 << nl;
                continue;
            }
            auto lb = lower_bound(pre.begin(), pre.end(), x);
            cout << (lb-pre.begin())+1 << nl;
        }
    }
    return 0;
}