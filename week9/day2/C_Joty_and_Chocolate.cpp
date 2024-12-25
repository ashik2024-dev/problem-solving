#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;

ll gcd(ll a, ll b){
    return __gcd(a, b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--){
        
    // }

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll x = (n / a) * p;
    ll y = (n / b) * q;

    ll overlap = (n / lcm(a, b)) * (p+q);
    // cout << x <<" "<<y << nl;

    ll ans1 = (x+y) - overlap;
    // cout << ans1 << nl;

    ll z = (n / lcm(a, b)) * max(p, q);

    cout << ans1 + z << nl;

    return 0;
}