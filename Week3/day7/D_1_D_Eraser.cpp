#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k, ans = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n;i++){
            if(s[i]=='B'){
                ans++;
                i = i + k - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}