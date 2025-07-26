#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main() {
    int x=45,z=89;
    swap(&x, &z);
    cout<< "x: " << x << "y: "<< z <<endl;
    return 0;
}