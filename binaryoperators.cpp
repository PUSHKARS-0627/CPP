#include <iostream>
using namespace std;
int decimaltobinary(int n){
    int binary[32];
    int i = 0;
    while(n>0){
        binary[i] = n%2;
        n = n/2;
        i++;
    }
    cout << "Binary form:";
    for (int j = i - 1; j >= 0; j--) {
    cout << binary[j];
  }
  cout << endl;
  return 0;
}
int main(){
    int x;
    int y = 1101;
    // int and = x & y;
    // int or = x || y;
    cout << "Enter number:";
    cin >> x;
    decimaltobinary(x);
    // cout << 
    return 0;
}