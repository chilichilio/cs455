#include <iostream>
#include <random>
#include <ctime>

using namespace std;

/////////////////////////////////////////////////
// mt19937 rng(6); //declared in <random>
/////////////////////////////////////////////////

void randomNum() {
    mt19937 rng(6);
    for(int i=0;i<3;i++) {
        double r=((double)rng())/rng.max();
        cout << r << endl;
    }
}// randomNum()

void randomNum2() {
    mt19937 rng(6);
    for(int i=0;i<3;i++) {
        double r=((double)rng())/rng.max();
        cout << r << endl;
    }
}// randomNum()

int main() {
 randomNum();
 randomNum();
 randomNum2();
 return 0;
}//main()