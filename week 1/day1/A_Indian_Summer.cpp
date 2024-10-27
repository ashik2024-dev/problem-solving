#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    set<pair<string, string>> s;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        string a, b;
        cin >> a >> b;
        s.insert({a, b});
    }
    cout << s.size() << endl;
    
    return 0;
}