#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        // for(auto [x,y] : mp){
        //     cout << x << " " << y << endl;
        // }
        priority_queue<int> pq;
        for(auto [x,y] : mp){
            pq.push(y);
        }

        while(!pq.empty()){
            if(pq.size()<2)break;
            ll x = pq.top();
            pq.pop();
            ll y = pq.top();
            pq.pop();

            x--, y--;
            if(x>=1)
                pq.push(x);
            if(y>=1)
                pq.push(y);
        }

        ll ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}