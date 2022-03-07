#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    bool test = true;
    if ('a' <= s[0] && s[0] <= 'z' || 'A' <= s[0] && s[0] <= 'Z') test = true;
      else test = false;
    if ( test == true ){
        if (s.length() >= 6 && s.length() <=15) test = true;
          else test = false;
    }
    if ( test == true ){
        for( int i = 0; i < s.length(); i ++ ){
            if ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z' || '0' <= s[i] && s[i] <= '9')
               test = true;
            else test = false;
            if ( test == false ) break;
        }
    }
    if ( test == true ) cout << "Valid username.";
      else cout << "Invalid username.";
    return 0;
}
