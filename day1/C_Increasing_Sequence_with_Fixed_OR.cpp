#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        deque<ll> ans;

        for (int k = 0; k <= __lg(n);k++){
            if((n>>k)&1){
                ll v = n - (1LL << k);
                if(v>0)
                    ans.push_front(v);
            }
        }
        ans.push_back(n);

        cout << ans.size() << nl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << nl;
    }
    return 0;
}