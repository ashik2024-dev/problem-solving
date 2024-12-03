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

        string s1 = s;
        reverse(s1.begin(), s1.end());

        if(s<=s1)
            cout << s << endl;
        else{
            cout << s1 + s << endl;
        }
    }
    return 0;
}