#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, l, r;
    cin >> n;
    l = 0, r = n - 1;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int s = 0, d = 0;
    for (int i = 0; i < n;i++){
        int mx = max(arr[l], arr[r]);
        if(i%2==0)
            s += mx;
        else
            d += mx;
        if(mx==arr[l])
            l++;
        else
            r--;
    }
    cout << s << " " << d << endl;
    return 0;
}