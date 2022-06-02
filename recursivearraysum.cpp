#include <iostream>
#include <cmath>

using namespace std;

int arraysum(int array[], int i, int n) {
    if(i == n-1){
        return array[i];
    }
    else{
        return array[i] + arraysum(array,i+1,n);
    }
}

int main() {
    int a [6] = {1,2,3,4,5,6};
    cout << arraysum(a,0,6) << endl;
    }