#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    int arr[n];
    int max = -1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    return 0;
}



// #include<iostream>
// using  namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
    
//     cout<<"Original:"<<" "<<a<<" "<<"Original:"<<" "<<b<<endl;

// a^=b;
// cout<<a<<endl;

// a&=b;
// cout<<a<<endl;
// a|=b;
// cout<<a<<endl;

// return 0;
// }