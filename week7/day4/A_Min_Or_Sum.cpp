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
        ll n;
        cin >> n;
        vector<ll>v(n);
        ll s = 0, ans = 0;
        fr
        {
            cin >> v[i];
            s += v[i];
            ans = ans | v[i];
        }
        cout << ans << nl;

        // cout << s - ans << nl;
    }
    return 0;
}