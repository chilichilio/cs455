#include <iostream>
#include <random>
#include <ctime>
#include <cmath>

using namespace std;

void printStars(int n) {
  for(int i=0;i < n;i++) {
    cout << "*";
  }
  cout << endl;
}/// printStars()

void paretoPrint(double l, double s) {
    mt19937 rng(601); 
    double a=1.05, par;
    int N=100, bins[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<N;i++){
        par = 1/pow(((double)rng())/rng.max(),1/a);
        par = (par-s)/(l-s); // 0..1 result
        int n = floor(par*10);
        if(n==10) n=9;
        bins[n]++;
    }
    for(int i=0;i<10;i++) {
        cout << bins[i] << endl;
    }
    for(int i=0;i<10;i++) {
        printStars(bins[i]);
    }// print stars calling another function
} // paretoPrint()

void paretoDis() {
    mt19937 rng(601); 
    double a=1.05, largest=-100000000, smallest=100000000, par;
    // int bins = [0,0,0,0,0,0,0,0,0,0]; // 10 variables
    long N = 100; // # of random numbers generated
    for(int i=0;i<N;i++){
        par = 1/pow(((double)rng())/rng.max(),1/a);
        if(par>largest)largest=par;
        if(par<smallest)smallest=par;
        }
    paretoPrint(largest,smallest);
} /// paretoDis()

int main() {
    paretoDis();
    return 0;
}//main()
