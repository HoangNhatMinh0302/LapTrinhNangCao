#include<bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if ( (a+b)<=c || (a+c)<=b || (b+c)<=a ) cout << "invalid";
    else {
        double p = (a + b + c) / 2;
        double s = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << fixed << setprecision(2) << s;
    }
    return 0;
}

