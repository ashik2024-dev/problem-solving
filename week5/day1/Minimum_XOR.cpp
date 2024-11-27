#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n, x = 0, mn = LLONG_MAX;
        cin >> n;
        vector<ll> v(n);
        fr {
            cin >> v[i];
            x = x ^ v[i];
            mn = x;
        }
        fr {
            mn = min(mn, x ^ v[i]);
        }
        cout << mn << nl;
    }
    return 0;
}