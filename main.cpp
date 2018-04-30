#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long x);

int main() {
    long x;
    cout << "Enter number: ";
    cin >> x;

    bool p = isPrime(x);

    if (p){
        cout << x << " is prime." << endl;
    } else {
        cout << x << " is not prime." << endl;
    }

    for (long i = 2; i < x/2; i = i + 1){
        if (x % i == 0){
            if (isPrime(x/i)){
                cout << x/i << " is the largest prime divisor."<< endl;
                break;
            }
        }
    }

    return 0;
}

bool isPrime(long x){
    long y = sqrt(x);

    for (long i = y; i > 1; i = i - 1){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}