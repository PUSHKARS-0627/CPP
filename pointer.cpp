#include<iostream>
using namespace std;

int main() {
    float num;
    float *x;
    cout<<"Enter the number : ";
    cin>>num;
    x=&num;
    cout<<"The address of number is : "<<x;
    cout<<"the value here is : "<<*x;
    cout<<"the address is also same as : "<<x;
    return 0;
}




