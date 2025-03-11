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

    int n,sum=0;
    cin >> n;
    vector<int> v(n);
    vector<int> pre(n);

    fr {
        cin >> v[i];
        sum += v[i];
        pre[i] = sum;
    }

    int q, x;
    cin >> q;

    while(q--){
        cin >> x;
        int lb = lower_bound(pre.begin(), pre.end(), x)-pre.begin();
        cout << lb + 1 << nl;
    }

    return 0;
}