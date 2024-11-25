#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string s;
    int k;
    cin >> s >> k;
    int l = 0, r = 0,ans = -1;
    map<char,int>mp;
    while(r<s.size()){
        mp[s[r]]++;
        if(mp.size()==k){
            ans = max(ans, r - l + 1);
        }
        else if(mp.size()>k){
            while(l<=r){
                if(mp.size()==k) break;
                else if(mp.size()>k) {
                    mp[s[l]]--;
                    if(mp[s[l]]==0){
                        mp.erase(mp.find(s[l]));
                    }
                    l++;
                }
            }
            if(mp.size()==k){
                ans = max(ans, r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}