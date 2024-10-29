#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int a, b;
cin>>a>>b;

int x = a+(a-1);
int y = b+(b-1);
int z = a+b;

int coins = max({x,y,z});

cout<<coins<<" ";

  return 0;
}