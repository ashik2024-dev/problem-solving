#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n,s=0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i]<0)
                s += -v[i];
            else
                s += v[i];
        }
        ll cnt = 0, f = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]<0 || (v[i]<=0 && f==1)){
                if(!f){
                    f = 1;
                    cnt++;
                }
            }else{
                f = 0;
            }
        }
        cout << s << " " << cnt << endl;
    }
    return 0;
}