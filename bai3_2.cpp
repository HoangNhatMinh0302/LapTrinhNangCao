#include<bits/stdc++.h>
using namespace std;
int main(){
   float m, n;
   cin >> m >> n;
   m = sqrt(m);
   n = sqrt(n);
   int d = ceil(m);
   while ( d <= n ){
       cout << d*d << " ";
       d++;
   }
   return 0;
}
