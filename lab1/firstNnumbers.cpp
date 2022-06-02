#include <iostream>
#include <cmath>
using namespace std;

int sumV1(int n) {
    if(n==0) return 0;
    else {
        return n+sumV1(n-1);
    }
}

int sumV2(int n) {
    int total = 0;
    for(int i=n;i>=0;i--) {
        total += i;
    }
    return total;
}

int main() {
    for(int i=1;i<=100;i++) {
        cout << sumV1(i) << endl;
        cout << sumV2(i) << endl;
    }
    return 0;
}