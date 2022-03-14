#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int size = s.length();
    int d;
    for( int i = 0; i < size; i ++ )
      if (s[i] == ' ') cout << s[i];
        else{
          d = i;
          break;
      }
    for ( int i = d; i < size; i ++ ){
        if( s[i] != ' ') cout << s[i];
          else if ( s[i] == ' ' && s[i-1] != ' ') cout << s[i];
    }
    return 0;
}
