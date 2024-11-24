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
    multiset<ll> ml;
    ll l = 0, r = 0,ans=0;
    while (r < n)
    {
        ml.insert(v[r]);
        ll mn = *ml.begin();
        ll mx = *ml.rbegin();

        if(mx-mn<=k){
            ans += (r-l + 1);
        }else{
            while(l<=r){
                ll MN = *ml.begin();
                ll MX = *ml.rbegin();
                if(MX-MN <=k)break;
                ml.erase(ml.find(v[l]));
                l++;
            }
            ll mn = *ml.begin();
            ll mx = *ml.rbegin();
            if(mx-mn<=k){
                ans += (r-l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}