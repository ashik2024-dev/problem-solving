#include<bits/stdc++.h>
using namespace std;

int typingTimeOfPassword(string s){
    int t = 2;
    for (int i = 1; i < s.size();i++){
        if(s[i] == s[i-1])t+=1;
        else t+=2;
    }
    return t;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--){
        string s,ans;
        cin >> s;
        int mx = -1;

        for (int i = 0; i < s.size();i++){
            for(char c : {'a','b'}){
                string newPassword = s.substr(0, i) + c + s.substr(i);
                int currentTime = typingTimeOfPassword(newPassword);

                if(currentTime > mx){
                    mx = currentTime;
                    ans = newPassword;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}