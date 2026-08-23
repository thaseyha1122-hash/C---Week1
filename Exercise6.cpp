#include <iostream>
using namespace std;

int main(){

    int arr[6] = {2,8,5,7,10,9};
    int max = arr[0];

    for(int i=0;i<6;i++){

        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum Number : " << max ;

    return 0;
}