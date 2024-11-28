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
        ll n, ans;
        cin >> n;
        vector<ll> v(n);
        int z = 0, nz = 0;

        fr{
            cin >> v[i];
            if(v[i]==0)
                z++;
            else
                nz++;
        }

        if(z==0)
            ans = 0;
        else{
            if(z-1<=nz)
                ans = 0;
            else{
                auto mx = max_element(v.begin(), v.end());
                if(*mx==1)
                    ans = 2;
                else
                    ans = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}