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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n, g1 = 0, g2 = 0;
        cin >> n;
        vector<ll> v(n);
        vector<ll> v1;
        vector<ll> v2;

        fr
        {
            cin >> v[i];
            if(i%2==0){
                v1.push_back(v[i]);
                g1 = gcd(g1, v[i]);
            }else{
                v2.push_back(v[i]);
                g2 = gcd(g2, v[i]);
            }
        }

        int flag = 1;

        for (int i = 0; i < v2.size();i++){
            if(v2[i]%g1==0){
                flag = 0;
                break;
            }
        }

        if(flag){
            cout << g1 << nl;
            continue;
        }

        flag = 1;
        for (int i = 0; i < v1.size(); i++)
        {
            if(v1[i]%g2==0){
                flag = 0;
                break;
            }
        }

        if(flag)
            cout << g2 << nl;
        else
            cout << 0 << nl;
    }
    return 0;
}