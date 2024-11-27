#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n,j=1;
        cin >> n;
        ll x = (n * (n - 1)) / 2;
        vector<ll> v(x);
        vector<ll> ans;

        for (ll i = 0; i < x; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        multiset<ll> ml;
        ll r = n-j, l = 0;
        while(l<=r){
            if(l<r){
                ml.insert(v[l]);
            }else{
                ans.push_back(*ml.begin());
                j++;
                r += (n - j);
                ml.clear();
                ml.insert(v[l]);
            }
            l++;
        }
        ans.push_back(v[x - 1]);
        for(ll i:ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}