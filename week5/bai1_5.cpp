#include<bits/stdc++.h>
using namespace std;

struct student{
    int roll;
    string name;
    int age;
    int mark;
};
int main(){
        struct student a;
        cin >> a.roll;
        cin.ignore();
        getline(cin, a.name);
        cin >> a.age;
        cin >> a.mark;

        cout << a.roll << "." << a.name << endl;
        cout <<  "age: " << a.age << "   "
             << "mark: " << a.mark << endl;
    return 0;
}

