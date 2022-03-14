#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float a[1000];
    for( int i = 1; i <= n; i ++ )
       cin >> a[i];
    sort(a+1,a+n+1);
    for( int i = n; i >= 1; i -- )
       cout << fixed << setprecision(2) << a[i] << " ";
    return 0;
}
