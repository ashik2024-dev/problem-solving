#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> v(n);
        fr cin >> v[i];

        sort(v.begin(), v.end());
        ll ans = 0;

        for (int i = 0; i < n;i++){
            ll ind1 = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
            ll ind2 = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin();
            ans += (ind2 - ind1);
        }

        cout << ans << nl;
    }
    return 0;
}