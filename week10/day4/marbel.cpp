#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, q, c=0;
    while(1){
        c++;
        int n, q;
        cin >> n >> q;
        if(n==0&&q==0)break;

        printf("CASE# %d:\n", c);

        vector<int> v(n);
        fr cin >> v[i];

        sort(v.begin(), v.end());

        int x;
        for (int i = 0; i < q;i++){
            cin >> x;
            int lb = lower_bound(v.begin(), v.end(), x)-v.begin();
            // cout << lb << nl;
            if (v[lb] == x)
            {
                printf("%d found at %d\n", x,lb+1);
            }
            else
            {
                printf("%d not found\n", x);
            }
        }
    }
    return 0;
}