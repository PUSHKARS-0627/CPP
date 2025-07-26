#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    bool sorted = true;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(arr[0]>arr[1]){
        int temp = arr[0];
        arr[0] = arr[1];
        temp = arr[1];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not sorted";
    }
    return 0;

}