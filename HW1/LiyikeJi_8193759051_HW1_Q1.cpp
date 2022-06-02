#include <iostream>
using namespace std;

double mySqrt(double n=4); // eg. mySqrt(4) will return 2

double mySqrt(double n) {
  double epsilon=0.000001;
  double estimate = 1; // for starters, imagine that n's square root is 1
  while(abs((0.5*(estimate + n/estimate))-estimate)>=epsilon && n>=0) {
    estimate = 0.5*(estimate + n/estimate);
  }
  return estimate;
}

int main() {

  double s = mySqrt(5); 
  cout << s << endl; // expect 2.236

  return 0;
}// main()