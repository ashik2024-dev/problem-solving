#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n, r;
        cin >> n >> r;
        vector<ll> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
            v[i] += (i + 1);
        }
        sort(v.begin(), v.end());

        int cnt=0;
        for(int i:v){
            if(r>=i){
                r -= i;
                cnt++;
            }else break;
        }
        cout << cnt << endl;
    }
    return 0;
}