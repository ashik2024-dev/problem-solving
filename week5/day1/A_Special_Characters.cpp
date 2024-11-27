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
        if(n%2==1){
            cout << "NO" << nl;
            continue;
        }
        for (int i = 0; i <= (n/2)-1;i++){
            char x = 'A' + i;
            s += x;
            s += x;
        }
        if(n%2==0){
            cout << "YES" << nl;
            cout << s << nl;
        }
    }
    return 0;
}