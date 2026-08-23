#include <iostream>
using namespace std ;
int main(){
    int score1;
    int score2;

    cout << "Enter Score 1 : ";
    cin >> score1;
    cout << "Enter Score 2 : ";
    cin >> score2;
    float avg = (score1 + score2)/2;
    cout << "Your averge is : " << avg << endl;
    if(avg >= 90 && avg <=100){
        cout << "Grade A \n";
    }
    else if (avg >=80){
        cout << "Grade B\n";
    }
    else if (avg >=70){
        cout << "Grade C\n";
    }
    else if (avg >=60){
        cout << "Grade D\n";
    }else{
        cout << "Grade F\n";
    }
    
}