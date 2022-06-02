#include <iostream>
#include <cmath>
using namespace std;

double rr(double a, double b , double c) {
    if((b*b-4*a*c)>= 0) {
        double r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        double r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        cout << r1 << "," << r2 <<endl;
    }
}

int main() {
    double a=2.0, b=5, c=3.1;
    rr(a,b,c);
    return 0;
}