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
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;

        for(char c:s){
            mp[c]++;
        }

        while(n>=1){
            for(auto &i:mp){
                if(i.second!=0){
                    cout << i.first;
                    i.second--;
                    n--;
                }
            }
        }
        cout << nl;
    }
    return 0;
}