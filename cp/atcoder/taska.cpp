#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  char ch='o';
  string str;
  cin >> n;
  cin >> str;
  while(str.size() <= n){
    str=ch+str;
  }
  cout << str << endl;
  return 0;
}