#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;

        ll ans1 = abs(a - 1);

        ll x = abs(b - c);
        ll y = abs(c - 1);
        ll ans2 = x + y;

        ll ans = min(ans1, ans2);

        if(ans==ans1 && ans==ans2)
            cout << 3 << endl;
        else if (ans == ans1)
            cout << 1 << endl;
        else if(ans == ans2)
            cout << 2 << endl;
    }
    return 0;
}