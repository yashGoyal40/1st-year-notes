#include <iostream>
#include <vector>

using namespace std;

vector<int> primeFactorization(int num) {
    vector<int> factors;

    // Divide the number by 2 until it is no longer divisible
    while (num % 2 == 0) {
        factors.push_back(2);
        num /= 2;
    }

    // Check for prime factors starting from 3
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }

    // If the number itself is a prime number greater than 2
    if (num > 2) {
        factors.push_back(num);
    }

    return factors;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    vector<int> factors = primeFactorization(number);

    cout << "Prime factorization of " << number << " is: ";
    for (int factor : factors) {
        cout << factor << " ";
    }

    return 0;
}
