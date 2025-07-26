#include<iostream>
using namespace std;
int main(){
    int x,y,z,great;
    cout << "Enter the numbers: ";
    cin >> x >> y >> z;
    if((x > y)&&(x > z)){
        great = x;
    }
    else if((y > x)&&(y > z)){
        great = y;
    }
    else{
        great = z;
    }
    cout << "Greatest: " << great;
    return 0;
}

