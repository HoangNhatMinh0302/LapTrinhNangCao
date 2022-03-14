#include<bits/stdc++.h>
using namespace std;
void printArrow(int n, bool left){
    if (left == false){
        int d = n;
        while (d >=1){
            for (int i = 1; i <= n-d; i ++)
               cout << "  ";
            for (int i = 1; i <= d; i ++)
               cout << "*";
            cout << endl;
            d --;
        }
        d = 2;
        while (d <=n){
            for (int i = 1; i <= n-d; i ++)
               cout << "  ";
            for (int i = 1; i <= d; i ++)
               cout << "*";
            cout << endl;
            d ++;
    }
    }
    else{
        int d = n;
        while (d >=1){
            for (int i = 1; i <= d-1; i ++)
               cout << " ";
            for (int i = 1; i <= d; i ++)
               cout << "*";
            cout << endl;
            d --;
        }
        d = 2;
        while (d <=n){
            for (int i = 1; i <= d-1; i ++)
               cout << " ";
            for (int i = 1; i <= d; i ++)
               cout << "*";
            cout << endl;
            d ++;
    }
    }
}
int main(){
    int n, left;
    cin >> n >> left;
    printArrow(n, left);
    return 0;
}
