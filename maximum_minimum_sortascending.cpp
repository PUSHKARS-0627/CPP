#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    int sample[3];
    int first,second,third;
    // cin>>first;
    // cin>>second;
    // cin>>third;
    // int result;
    // if(first>second && first>third){
    //     cout<<"FIRST IS LARGEST";
    //     result=1;
    // }
    // else if(second>first && second>third){
    //     cout<<"SECOND IS LARGEST";
    // }
    // else if(third>second && third>first){
    //     cout<<"THIRD IS LARGEST";
    // }

    for(int i=0;i<3;i++){
        cin>>sample[i];

    }
    cout<<"     "<<endl;
    for(int i=0;i<3;i++){
        cout<<sample[i]<<endl;


    }
    
    
    int max=sample[0];
    int minimum=sample[0];
    for(int i=1;i<3;i++){
       
        if(sample[i]>max){
            max=sample[i];
        }
        if(sample[i]<minimum){
            minimum=sample[i];
        }
        
    }
    cout<<"maximum number is : "<<max<<endl;
    cout<<"minimum number is : "<<minimum<<endl;



    int n = sizeof(sample) / sizeof(sample[0]);

    bubbleSort(sample, n);

    for (int i = 0; i < n; i++)
        cout << sample[i] << " ";


    

    return 0;
}