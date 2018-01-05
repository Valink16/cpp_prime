#include <iostream>
#include <ctime>
#include "func.h"
using namespace std;

int main() {
    int limit;
    cout << "Enter limit: ";
    cin >> limit;
    time_t s(clock());
    for (int nb(3); nb < limit; nb += 2) {
        if (isPrime(nb)) {
            cout << nb << endl;
        }
    }
    time_t e(clock());
    cout << "Done in:" << ((double) e-s) / CLOCKS_PER_SEC << "s" << endl; 
    return 0;
}