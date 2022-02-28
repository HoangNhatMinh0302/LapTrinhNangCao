#include<bits/stdc++.h>
using namespace std;
int main(){
    float a[1000];
    int n;
    cin >> n;
    for( int i = 1; i <= n; i ++ )
       cin >> a[i];
    for (  int i = n; i >= 1; i -- )
      cout << fixed << setprecision(2) << a[i] << " ";
    return 0;
}
