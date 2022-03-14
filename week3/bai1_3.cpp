#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000], b[1000];
    for( int i = 1; i <= n; i ++ )
       cin >> a[i];
    for( int i = 1; i <= n; i ++ )
       cin >> b[i];
    int d = 1;
    for( int i = 1; i <= n; i ++ )
        if( a[i] != b[i]){
            d = 0;
            break;
        }
    if (d == 0) cout << "NO";
      else cout << "YES";
    return 0;
}
