#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter limit: ";
    cin >> n;

    vector<bool> isPrime(n + 1, true);

    // 0 and 1 are not prime
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // Mark multiples of i as not prime
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime numbers from 2 to " << n << " are: ";

    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            cout << i << " ";
    }

    return 0;
}