#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int l = 0, r = n - 1;
        while(l<=r){
            if(s[l]!=s[r]){
                n -= 2;
                l++;
                r--;
            }else break;
        }
        cout << n << endl;
    }
    return 0;
}