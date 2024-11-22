#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector < int > v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];
    int ans = 0,s=0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        s += v[r];
        while(s>k){
            s -= v[l];
            l++;
        }
        if (s == k)
        {
            ans = max(ans, (r - l + 1));
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}