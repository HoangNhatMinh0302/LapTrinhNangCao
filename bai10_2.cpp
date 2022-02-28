#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    float a[1000], b[1000];
    cin >> n;
    for( i = 1; i <= n; i++) cin >> a[i];
    for( i = 1; i <= n; i++) cin >> b[i];
    double t = 0;
    for( i = 1; i <= n; i++) t = t + a[i]*b[i];
    cout  << fixed << setprecision(2) << t;
    return 0;
}
