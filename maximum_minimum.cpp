#include<iostream>
using namespace std;

int main() {
    int max=-1;
    int number;
    cout << "Enter number of elements in array: "<<endl;
    cin >> number;
    int arrays[number];
    for(int i=0; i<number; i++) {
        cin >> arrays[i];
        if(arrays[i]>max) {
            max = arrays[i];
        }
    int min = arrays[0];
    for(int i=0;i<number;i++){
        if(arrays[i]<min){
            min = arrays[i];
        }
    }

    }
    cout << "Maximum element in the array is: " << max << endl;
    return 0;
}