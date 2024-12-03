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
        ll n,m;
        cin >> n >> m;

        if(n>m){
            cout << "NO" << nl;
            continue;
        }

        vector<int>v;
        int ans=0;
        if(n%2==0 && m%2==0){
            cout<<"YES"<<nl;
            for (int i = 1; i <= n - 2;i++){
                v.push_back(1);
                ans++;
            }
            v.push_back((m-ans) / 2);
            v.push_back((m-ans) / 2);
        }else if(n%2==1 && m%2==1){
            cout<<"YES"<<nl;
            for (int i = 1; i <= n - 1;i++){
                v.push_back(1);
                ans++;
            }
            v.push_back(m-ans);
        }else if(n%2==1 && m%2==0){
            cout<<"YES"<<nl;
            for (int i = 1; i <= n - 1;i++){
                v.push_back(1);
                ans++;
            }
            v.push_back(m-ans);
        }else {
            cout << "NO" << nl;
        }

        for(int i:v){
            cout << i << " ";
        }
        cout << nl;
    }
    return 0;
}