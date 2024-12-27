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
    
    int t;
    cin >> t;
    while(t--){
        ll x, y, k;
        cin >> x >> y >> k;

        for (ll i = 0; i < k;i++){
            x++;
            while(x%y!=0)
                x = x / y;
        }

        cout << x << nl;
    }
    return 0;
}