#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;

ll gcd(ll a, ll b){
    return __gcd(a, b);
}

bool isValid(ll a, ll b, ll l, ll r){
    ll x = a + b;
    if(x>=l && x<=r){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;

        int flag = 0;
        if (l==r){
            for (ll i = r-1, j = 1; i >= 2;i--,j++){
                if (isValid(i, j, l, r) && gcd(i, j) != 1)
                {
                    flag = 1;
                    cout << i << " " << j << nl;
                    break;
                }
            }
            if(!flag){
                cout << -1 << nl;
            }
        }else{
            if(l<=3 && r<=3){
                cout << -1 << nl;
            }
            else if (r % 2 == 0)
            {
                cout << r / 2 << " " << r / 2 << nl;
            }
            else if(r%2==1)
            {
                r = r - 1;
                cout << r / 2 << " " << r / 2 << nl;
            }
        }
    }
    return 0;
}