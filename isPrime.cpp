#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "enter an integer: ";
    cin >> number;

    //test divisors of number, if a divisor other than 1 and number is
    // found, then number is not prime.
    bool isPrime = true;
    for (int i = 2; i <= number; i++)
    if (!(number % i))
        isPrime = false;

    if (isPrime)
        cout << "prime\n";
    else
        cout << "not prime\n";

    return 0;
}