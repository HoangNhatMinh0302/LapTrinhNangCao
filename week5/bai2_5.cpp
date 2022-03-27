#include<bits/stdc++.h>
using namespace std;

struct student{
    int roll;
    string name;
    int age;
    string address;
    int mark;
};
int main(){
    struct student a[6];
    for(int i = 1; i <= 5; i ++){
        cin >> a[i].roll;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age;
    }
        cout << a[2].roll << "." << a[2].name << "   ";
        cout <<  "age: " << a[2].age << "   ";

    return 0;
}
