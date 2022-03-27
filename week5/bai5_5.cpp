#include<bits/stdc++.h>
using namespace std;

struct student{
    int roll;
    string name;
    int chem_marks;
    int math_marks;
    int phy_marks;
};
int main(){
    struct student a[6];
    for(int i = 1; i <= 5; i ++){
        cin >> a[i].roll;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].chem_marks
            >> a[i].math_marks
            >> a[i].phy_marks;
    }
    for(int i = 1; i <= 5; i ++){
        cout << a[i].roll << "." << a[i].name << endl;
        cout <<  "chem_marks: " << a[i].chem_marks << endl
             << "math_marks: " << a[i].math_marks << endl
             << "phy_mark: " << a[i].phy_marks << endl;
    }
    return 0;
}
