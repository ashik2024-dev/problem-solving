#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
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
        string s, t;
        cin >> s;
        cin >> t;
        int mm = 0;
        int flag = 0;

        if(s==t || s[0]=='1') {
            yes;
            continue;
        }

        fr {
            if(s[i]=='1' && mm==1){
                flag = 0;
                break;
            }else if(s[i]=='1' && mm==0){
                flag = 1;
                break;
            }else if(s[i]!=t[i]){
                mm = 1;
            }
        }

        if(flag)
            yes;
        else
            no;
    }
    return 0;
}