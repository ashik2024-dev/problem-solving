#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, f, l;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.size();i++){
            if(s[i]=='B'){
                 f = i;
                 break;
            }
        }

        for (int i = s.size() - 1; i >= 0;i--){
            if(s[i]=='B'){
                l = i;
                break;
            }
        }

        cout << (l - f) + 1 << endl;
    }
    return 0;
}