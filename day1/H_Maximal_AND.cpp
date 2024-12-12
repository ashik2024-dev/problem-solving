#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;

const int B = 30;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> bits(B+1);

        fr cin >> v[i];
        
        fr {
            for (int j = B; j >= 0;j--){
                if((v[i]>>j)&1){
                    bits[j]++;
                }
            }
        }

        // for(auto i:bits){
        //     cout << i << " ";
        // }
        // cout << nl;

        ll ans = 0;
        for (int j = B; j >= 0; j--)
        {
            if(bits[j]==n){
                ans += (1LL << j);
            }else{
                int needs = n - bits[j];
                if(needs <=k){
                    ans += (1LL << j);
                    k -= needs;
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}