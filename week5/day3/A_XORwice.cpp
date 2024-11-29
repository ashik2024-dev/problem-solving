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
        int a, b;
        cin >> a >> b;
        ll x = a ^ b;
        cout << x << nl;
    }
    return 0;
}