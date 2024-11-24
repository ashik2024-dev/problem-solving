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
    
    map<ll,ll> ml;
    ll l = 0, r = 0,ans=0;
    while (r < n)
    {
        ml[v[r]]++;

        if (ml.size() <= k)
        {
            ans += (r-l + 1);
        }
        else
        {
            while(l<=r){
                if(ml.size() <=k)break;
                else{
                    ml[v[l]]--;
                    if(ml[v[l]]==0){
                        ml.erase(ml.find(v[l]));
                    }
                    l++;
                }
            }
            if(ml.size()<=k){
                ans += (r-l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}