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
        int x, y, k;
        cin >> x >> y >> k;

        while(x>1){
            int p = y - (x % y);
            if(p>=k){
                x += k;
                k = 0;
            }
            else{
                x += p;
                k -= p;
            }
            while(x%y==0){
                x = x / y;
            }
            if(k<=0) break;
        }
        if(k>0){
            k = k % (y - 1);
            x += k;
            while(x%y==0){
                x = x / y;
            }
        }
        cout << x << nl;
    }
    return 0;
}