#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000];
    for( int i = 0; i < n; i ++ )
       cin >> a[i];
    int test = 1;
    for (int k = 0; k < n/2; k++) {
    if ( a[k] != a[n-1-k] ){
        test = 0;
        break;
        }
    }
    if ( test == 1) cout << "Symmetric array";
      else cout << "Asymmetric array";
    return 0;
}
