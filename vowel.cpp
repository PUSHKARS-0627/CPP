#include <iostream>
using namespace std;
int main(){
    char x;
    cout << "Enter a character: ";
    cin >> x;
    if(x == 'A'|| x=='a' || x == 'E' || x == 'e' || x == 'I' || x== 'i' || x == 'O' || x == 'o' || x == 'U' || x == 'u'){
        cout << "Entered character is a vowel";
    }
    else{
        cout << "Entered character is a consonant";
    }
    return 0;
}