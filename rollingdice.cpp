#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int round;
    int score =0;
    int sum = 0;
    cout << "Enter number of rounds: ";
    cin >> round;
    srand(time(0)); 

    for(int i=1;i<=round;i++){
        cout << "Round: " << i << endl;
        int dice1 = rand() % 6 + 1; 
        int dice2 = rand() % 6 + 1; 

        cout << "Dice1: " << dice1 << ",";
        cout << "Dice2: " << dice2 << endl;
        sum = dice1+dice2;
        if(dice1==1 &&dice2==1){
            cout << " Snake eye ";
            score=0;
            cout<<score;
            break;
            
        }
        else if(sum==7){
            cout<<" lucky seven ";
            score+=sum;
            cout<<score;
        }
        else if(dice1==dice2){
            cout<<"both double";
            score=sum+10;
            cout<<score;
        }
        else{
            score=score+sum;
            cout<<score;
        }

    }
    return 0;
}