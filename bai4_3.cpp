#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float a[1000];
    for( int i = 1; i <= n; i ++ )
       cin >> a[i];
    float k;
    cin >> k;
    int t = 1;
    for( int i = 1; i <= n; i ++ )
     if (a[i] > k &&  t == 1) {cout << fixed << setprecision(2) << k << " ";
                               cout << fixed << setprecision(2) << a[i] << " ";
                               t = 0;}
       else cout << fixed << setprecision(2) << a[i] << " ";
    return 0;
}
