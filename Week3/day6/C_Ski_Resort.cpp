#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> v(n);

        for (ll i = 0; i < n;i++)
            cin >> v[i];

        ll ans = 0, cnt = 0, res = 0, f = 0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]<=q){
                cnt++;
            }else{
                if(cnt>=k){
                    ll x = cnt - k + 1;
                    ans += (x * (x + 1)) / 2;
                }
                cnt = 0;
            }
        }
        if(cnt>=k){
            ll x = cnt - k + 1;
            ans += (x * (x + 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}