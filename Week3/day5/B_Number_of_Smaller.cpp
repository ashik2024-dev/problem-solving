#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> v1(n);
    vector<ll> v2(m);
    vector<ll> ans;

    for (ll i = 0; i < n;i++)
        cin >> v1[i];

    for (ll i = 0; i < m;i++)
        cin >> v2[i];

    ll cnt = 0, l = 0, r = 0;

    while(r < m){
        if(l<n && v1[l]<v2[r]){
            l++;
            cnt++;
        }else{
            r++;
            ans.push_back(cnt);
        }
    }

    for(ll i:ans){
        cout << i << " ";
    }
    return 0;
}