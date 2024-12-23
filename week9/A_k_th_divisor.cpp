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

    ll n, k;
    cin >> n >> k;
    vector<ll> ans;

    for (ll i = 1; i * i <= n;i++){
        if(n % i == 0){
            ans.push_back(i);
            if((n/i)!=i)
                ans.push_back(n / i);
        }
    }
    
    sort(ans.begin(), ans.end());
    
    if(k<=0 || k > ans.size())
        cout << -1 << nl;
    else
        cout << ans[k - 1] << nl;
    return 0;
}