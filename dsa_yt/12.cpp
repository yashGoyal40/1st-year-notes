#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (isPrime(a))
        cout << a << " is prime" << endl;
    else
        cout << a << " is not prime" << endl;

    return 0;
}
