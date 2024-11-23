#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    for (int i = 0; i < n;i++)
        cin >> v[i];

    ll l = 0, r = 0, s = 0, ans=0;
    while (r < n)
    {
        s += v[r];
        if(s<=k){
            ans = max(ans, (r - l + 1));
        }else{
            s -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}