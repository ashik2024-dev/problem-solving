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
        ll n,j=0;
        cin >> n;
        vector<ll> v(n);
        fr cin >> v[i];
        map<char, int> mp;
        string s;

        fr{
            if(v[i]==0){
                char newChar = 'a' + j;
                s += newChar;
                mp[newChar]++;
                j++;
            }else{
                for (auto j:mp){
                    if(j.second==v[i]){
                        s += j.first;
                        mp[j.first]++;
                        break;
                    }
                }
            }
        }
        cout << s << nl;
    }
    return 0;
}