#include <iostream>

using namespace std;

int main(){
    int score1;
    int score2;

    cout << "Enter Score 1 : ";
    cin >> score1;
    cout << "Enter Score 2 : ";
    cin >> score2;
    float avg = (score1 + score2)/2;
    cout << "Your averge is : " << avg << endl;
    if(avg >=50){
        cout << "Pass \n";
    }
    else {
        cout << "Fail \n";
    }
    return 0;
}