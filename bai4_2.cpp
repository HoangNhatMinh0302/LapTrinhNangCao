#include<bits/stdc++.h>
using namespace std;
int main(){
   int c, d;
   cin >> c >> d;
   if (d%2==0 && (4*c-d)/2>0 && (c-(4*c-d)/2)>0)
   cout << "chicken = " << (4*c-d)/2
        << ", dog = "   << (c-(4*c-d)/2);
     else cout << "invalid";
   return 0;
}
