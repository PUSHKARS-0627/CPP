#include<iostream>
using namespace std;

int main() {
    int arr[4]={1,2,3,4};
    int *printarr = arr;

    for(int i=0;i<4;i++){
        cout<<"array is : "<<*(printarr+i)<<endl;
    }
    return 0;
}