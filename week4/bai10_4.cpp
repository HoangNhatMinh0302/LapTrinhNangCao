#include<bits/stdc++.h>
using namespace std;
string toLower (string s){
    int n = s.length();
    for( int i = 0; i < n; i ++)
      if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
    return s;
}
int main(){
    string s;
    getline(cin, s);
    tolower(s);
    cout << s;
    return 0;
}
