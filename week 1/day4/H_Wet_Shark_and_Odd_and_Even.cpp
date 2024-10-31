#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll n, s = 0;
    cin >> n;
    vector<ll> v(n);
    ll mn = LLONG_MAX;

    for (ll i = 0; i < n;i++){
        cin >> v[i];
        s += v[i];
        
        if(v[i]%2!=0){
            mn = min(v[i], mn);
        }
    }

    if(s%2!=0){
        if(mn!=LLONG_MAX){
            s -= mn;
        }else
            s = 0;
    }

    cout << s << endl;
    return 0;
}