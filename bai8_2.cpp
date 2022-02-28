#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n;
   cin >> n;
   n = abs(n);
   int count=1;
   while ( n > 9){
       n = n/10;
       count ++;
   }
   cout << count;
   return 0;
}
