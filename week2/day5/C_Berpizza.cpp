#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll q;
    ll type, j = 1;
    vector<ll> ans;
    set<pair<ll, ll>> s;
    multiset<pair<ll, ll>> ms;
    cin >> q;
    for (ll i = 0; i < q;i++){
        cin >> type;
        if(type==1){
            ll money;
            cin >> money;
            s.insert({j, money});
            ms.insert({money, -j});
            j++;
        }
        else if(type==2){
            ll pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            ms.erase({money,-pos});
            s.erase(s.begin());
        }else{
            ll pos = -ms.rbegin()->second, money = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, money});
        }
    }
    for(auto i:ans)
        cout << i << " ";
    return 0;
}