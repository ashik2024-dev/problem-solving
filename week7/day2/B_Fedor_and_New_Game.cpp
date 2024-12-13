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
    
    // int t;
    // cin >> t;
    // while(t--){
        
    // }

    ll n, m, k,cnt=0;
    cin >> n >> m >> k;

    vector<ll> v(m+1);
    for (int i = 0; i < m + 1;i++)
        cin >> v[i];

    for (int i = 0; i < m;i++){
        int dif = v[m] ^ v[i];
        ll difCnt = __builtin_popcount(dif);
        if(difCnt<=k){
            cnt++;
        }
    }
    cout << cnt << nl;
    return 0;
}