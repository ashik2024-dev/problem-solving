#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int lci = -1, lsi = -1;
        int p[s.size()]={0};
        for (int i = 0; i < s.size();i++){
            if(s[i]=='B'){
                s[i] = ' ';
                if(lci!=-10 && lci!=-1){
                    s[lci] = ' ';
                    lci = p[lci];
                }
            }

            else if(s[i]=='b'){
                s[i] = ' ';
                if(lsi!=-20 && lsi!=-1){
                    s[lsi] = ' ';
                    lsi = p[lsi];
                }
            }

            else{
                if(s[i]>='A' && s[i]<='Z'){
                    if(lci==-1){
                        lci = i;
                        p[i] = -10;
                    }else{
                        p[i] = lci;
                        lci = i;
                    }
                }
                else if(s[i]>='a' && s[i]<='z'){
                    if(lsi==-1){
                        lsi = i;
                        p[i] = -20;
                    }else{
                        p[i] = lsi;
                        lsi = i;
                    }
                }
            }
        }
        // cout << s << endl;
        for (int i = 0; i < s.size();i++){
            if(s[i]!=' '){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}