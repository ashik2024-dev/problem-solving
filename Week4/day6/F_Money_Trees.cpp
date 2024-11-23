#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n, k, s = 0, x = 0, ans = 0;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> h(n);

        for (int i = 0; i < n;i++)
            cin >> a[i];

        for (int i = 0; i < n;i++)
            cin >> h[i];

        ll l = 0, r = 1;
        x = a[0];

        if(x<=k)
            ans = 1;

        while (r < n)
        {
            if(h[r-1]%h[r] == 0){
                x += a[r];
            }else{
                x = a[r];
                l = r;
            }
            while(x>k){
                x -= a[l];
                l++;
            }
            ans = max(ans, (r - l + 1));
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}