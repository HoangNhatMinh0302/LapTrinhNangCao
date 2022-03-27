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
    struct student a[16];
    for(int i = 1; i <= 15; i ++){
        cin >> a[i].roll;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age;
        cin.ignore();
        getline(cin, a[i].address);
        cin >> a[i].mark;
    }
    for(int i = 1; i <= 15; i ++){
        cout << a[i].roll << "." << a[i].name << endl;
        cout <<  "age: " << a[i].age << "   "
             << "address: " << a[i].address << "   "
             << "mark: " << a[i].mark << endl;
    }
    return 0;
}
