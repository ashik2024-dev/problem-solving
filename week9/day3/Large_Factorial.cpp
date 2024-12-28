#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;

const ll mod = 1e9 + 7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n, ans = 1;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            ans = ((ans%mod) * (i%mod))%mod;
        }
        cout << ans << nl;
    }
    return 0;
}