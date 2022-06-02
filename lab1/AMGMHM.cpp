#include <iostream>
#include <cmath>
using namespace std;

double AM(double a, double b) {
    return 0.5*(a+b);
}

double GM(double a, double b) {
    return sqrt(a*a+b*b);
}

double HM(double a, double b) {
    return 2*(1/(1/a+1/b));
}

int main() {
    cout << "The arithmetic mean of 3 and 5 is: " << AM(3,5) << endl;
    cout << "The geometric  mean of 3 and 5 is: " << GM(3,5) << endl;
    cout << "The harmonic   mean of 3 and 5 is: " << HM(3,5) << endl;
    return 0;
} // main()