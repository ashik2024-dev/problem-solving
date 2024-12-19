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
        ll x = __lg(n);
        // cout << x << nl;
        // x--;
        ll a = (1 << x);
        // cout << a << nl;
        ll b = n ^ a;
        cout << b << " " << a << nl;
    }
    return 0;
}