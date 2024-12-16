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

    ll n;
    cin >> n;
    string s = to_string(n);
    int len = s.length();
    ll ans = (1 << (len))-2;

    for (int i = len-1,j=0; i >= 0;i--,j++){
        if(s[i]=='7'){
            ans += (1 << j);
        }
    }

    cout << ans+1 << nl;

    return 0;
}