#include<iostream>

void doubleByValue(int x){
    x=x*2;
}
void doubleByReference(int &x){
    x=x*2;
}
using namespace std;
int main(){

    int num =10;
    doubleByValue(num);
    cout << "After doubleByVallue : " << num << endl;

    doubleByReference(num);
    cout << "After doubleByReference : " << num << endl;
    return 0;
}