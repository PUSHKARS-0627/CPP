#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num <= 1) {
        cout << "It is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= num - 1; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "It is a prime number." << endl;
    else
        cout << "It is not a prime number." << endl;

    return 0;
}
