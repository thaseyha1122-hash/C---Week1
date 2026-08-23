#include <iostream>

using namespace std; 
int main() {

    string name;
    int age;
    double gpa;
    // user input info
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Age  : ";
    cin >> age;
    cout << "Enter GPA  : ";
    cin >> gpa;
    //display data 
    cout << " ==================== Student info =================\n";
    cout << "Student Name : " << name << endl;
    cout << "Student Age  : " << age << endl;
    cout << "Student GPA  : " << gpa << endl;
    
    return 0;
}