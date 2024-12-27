#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;

bool isPrime(ll n){
    if(n==1)
        return false;
    for (ll i = 2; i * i <= n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--){
        
    // }

    ll n;
        cin >> n;

        if(isPrime(n))
            cout << 1 << nl;
        else if(n%2==0)
            cout << 2 << nl;
        else{
            if(isPrime(n-2))
                cout << 2 << nl;
            else
                cout << 3 << nl;
        }
        
    return 0;
}