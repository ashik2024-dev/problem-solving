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
    vector<int> v(n);
    fr cin >> v[i];
    sort(v.begin(), v.end());

    // fr cout << v[i] << " ";
    // cout << nl;

    int q,x;
    cin >> q;

    for (int i = 0; i < q;i++){
        cin >> x;
        auto ub = upper_bound(v.begin(), v.end(), x);
        cout << (ub - v.begin()) << "\n";
    }

    return 0;
}