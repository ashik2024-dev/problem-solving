#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll n, m, ans = 0;
    cin >> n >> m;
    set<ll> v1;
    set<ll> v2;
    map<ll, ll> m1;
    map<ll, ll> m2;

    for (ll i = 0; i < n;i++){
        ll x;
        cin >> x;
        m1[x]++;
        v1.insert(x);
    }

    for (ll i = 0; i < m;i++){
        ll x;
        cin >> x;
        m2[x]++;
        v2.insert(x);
    }

    for(auto i:v1){
        ll a = m1[i];
        ll b = m2[i];
        ans += a * b;
    }

    cout << ans << endl;

    return 0;
}