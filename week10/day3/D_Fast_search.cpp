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
    
    // int t;
    // cin >> t;
    // while(t--){
        
    // }

    int n;
    cin >> n;
    vector<ll> v(n);
    fr cin >> v[i];

    sort(v.begin(), v.end());

    int q,l,r;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;

        auto lb = lower_bound(v.begin(), v.end(), l);
        auto ub = upper_bound(v.begin(), v.end(), r);

        int lInd = lb - v.begin();
        int uInd = ub - v.begin();

        // cout << lInd << " " << uInd << nl;

        cout << uInd - lInd << " ";
    }
    return 0;
}