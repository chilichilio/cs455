#include <iostream>
#include <ctime>
#include <cmath>
#include <random>

using namespace std;
mt19937 rng(time(NULL)); //declared in <random>

double randomNum() {
 double r=((double)rng())/rng.max();
 return r; // 0..1
}// randomNum()

void printStars(int n) {
  for(int i=0;i < n;i++) {
    cout << "*";
  }
  cout << endl;
}/// printStars()

double uniDis() {
    int bins[10]={0,0,0,0,0,0,0,0,0,0};
    long N = 1000000; // # of random numbers generated
    for(int i=0;i<N;i++){
        int n = floor(randomNum()*10);
        if(n==10) n=9;
        bins[n]++;
        }
    cout << "uniform distribution:" << endl;
    for(int i=0;i<10;i++) {
        printStars(floor(100 * bins[i]/N));
    }// print stars calling another function
    return 0;
} /// uniDis()

double triDis() {
    int bins[10]={0,0,0,0,0,0,0,0,0,0};
    long N = 1000000; // # of random numbers generated
    for(int i=0;i<N;i++){
        int n = floor((randomNum()+randomNum())*0.5*10);
        if(n==10) n=9;
        bins[n]++;
        }
    cout << "triangular distribution:" << endl;
    for(int i=0;i<10;i++) {
        printStars(floor(100 * bins[i]/N));
    }// print stars calling another function
    return 0;
} /// triDis()

int main() {
    srand(time(NULL));
    uniDis();// visualize a uniform distribution
    triDis();// visualize a triangular distribution
    return 0;
} /// main()