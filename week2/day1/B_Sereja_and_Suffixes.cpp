#include<bits/stdc++.h>
#define fr for(int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[n];
    fr cin >> arr[i];

    vector<int> cnt(n);
    set<int> s;

    for (int i = n - 1; i >= 0;i--){
        s.insert(arr[i]);
        cnt[i] = s.size();
    }

    for (int i = 0; i < m;i++){
        int pos;
        cin >> pos;
        pos--;
        cout << cnt[pos] << endl;
    }
    return 0;
}