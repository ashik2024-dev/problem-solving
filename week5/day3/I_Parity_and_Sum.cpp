#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n, od = 0, ev = 0;
        cin >> n;
        vector<ll> v(n);
        vector<ll> odd_number;
        vector<ll> even_number;

        fr{
            cin >> v[i];
            if(v[i]%2==0){
                ev++;
                even_number.push_back(v[i]);
            }
            else{
                od++;
                odd_number.push_back(v[i]);
            }
        }
        sort(even_number.rbegin(), even_number.rend());

        if(ev==n || od==n)
            cout << 0 << nl;
        else{
            sort(odd_number.rbegin(), odd_number.rend());
            int cnt = 0;
            int x = odd_number[0];
            cnt = odd_number.size() - 1;

            for(int i:v){
                if(i<x){
                    cnt++;
                }else break;
            }

        }
    }
    return 0;
}