#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll a, c, n, x;
        cin >> a >> c >> n;
        vector<ll> v(n);
        for (int i = 0; i < n;i++)
            cin >> v[i];

        ll sec = 0;
        sort(v.begin(), v.end());

        sec += (c - 1);
        c = 1;
        for (int i = 0; i < n; i++)
        {
            c += v[i];
            c = min(c, a);
            c--;
            sec++;

            if(i==n-1){
                x = c - 0;
                sec += x;
            }else{
                x = c - 1;
                c = 1;
                sec += x;
            }
        }
        cout << sec << endl;
    }
    return 0;
}