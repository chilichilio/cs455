#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int total = 1;
    for(int i=1;i<=n;i++) {
        total *= i;
    }
    return total;
} // factorial()

int main() {
    cout << factorial(8) << endl;
    return 0;
} // main()