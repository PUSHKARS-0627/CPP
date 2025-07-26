#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout << "Enter a number:";
    cin >> n;
    for(int i=0;n>0;i++){
        int rem = n%10;
        rev = rev *10 +rem;
        n/=10;
    }
    cout << rev;
    return 0;
}