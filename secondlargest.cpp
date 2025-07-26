#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    int max1 = -1;
    int max2;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    cout << "Second largest element is: " << max2 << endl;
    return 0;
}