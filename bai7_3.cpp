#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int alphabet = 0, number = 0, characters = 0;
    for (int i = 0; i < s.length(); i++) {
    if ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z')
       alphabet++;
    else if ('0' <= s[i] && s[i] <= '9')
       number++;
    else
       characters++;
}
    cout << alphabet << number << characters;
    return 0;
}
