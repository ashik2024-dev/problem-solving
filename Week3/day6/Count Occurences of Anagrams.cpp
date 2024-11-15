#include <bits/stdc++.h>
using namespace std;

vector<int> search(string& pat, string& txt) {
    int n = txt.length(), m = pat.length();
  
    string xPat = pat;
    sort(xPat.begin(), xPat.end());
  
    vector<int> res;  
  
    for (int i = 0; i <= n - m; i++) {
      
        string y = "";  
        for (int k = i; k < m + i; k++)
            y.push_back(txt[k]);
        sort(y.begin(), y.end());
      
        if (xPat == y)
            res.push_back(i);
    }
    return res;
}

int main() {
    string txt,pat;
    cin>>txt>>pat;

    vector<int> result = search(pat, txt);

    int count =0;
  
    for (int x : result)
        count++;

    cout<<count<<endl;
    return 0;
}
