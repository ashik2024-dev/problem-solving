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
        int n, ind = 0;
        cin >> n;
        int x = n * n;
        vector<int> v(x);
        int f = 1;
        int l = x;

        for (int i = 0; i < x / 2;i++){
            v[ind] = f;
            f++;
            ind++;
            v[ind] = l;
            l--;
            ind++;
        }
        if(n%2==1)
            v[ind] = f;
        
        // for(int i:v){
        //     cout << i << " ";
        // }
        // cout << nl;

        int s = 0;
        for (int i = 1; i <= n; i++)
        {
            if(i%2==1){
                for (int j = s; j < n * i;j++){
                    cout << v[j] << " ";
                }
                cout << nl;
                s = n * i;
            }
            else{
                for (int j = (n * i) - 1; j >= s;j--){
                    cout << v[j] << " ";
                }
                cout << nl;
                s = n * i;
            }
        }
    }
    return 0;
}