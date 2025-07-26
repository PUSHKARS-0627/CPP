#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int sum = 0;
    for(int i=1;i<x;i++){
        if(x % i == 0){
            sum += i;
        }
    }
    if(sum == x){
        cout << "It is a perfect number";
    }
    else{
        cout << "It is not a perfect number";
    }
    return 0;
}


// prime number