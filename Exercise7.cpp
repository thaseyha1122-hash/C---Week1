#include <iostream>
using namespace std;
int main(){

    string word;
    int count = 0;
    cout << "Enter your word : ";
    cin >> word;
    for(int i=0;i<word.length();i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i'
            || word[i] == 'o' || word[i] == 'u'){
            count++;
        }
    }
    cout << "Number of vowels is " << count << ".";
}