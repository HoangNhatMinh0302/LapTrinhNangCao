#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string s1 = "Zues";
    int test = s.find(s1);
    while ( test != -1){
        for(int i = 0; i < test; i ++){
            cout << s[i];
        }
        s = s.erase(0, test+4);
        cout << "Zeus";
        test = s.find(s1);
    }
    cout << s;
    return 0;
}
