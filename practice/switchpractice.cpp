#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<5;i++){
        switch(i){
            case 0:
            cout << "a" << endl;
            continue;
            case 1:
            cout << "b" << endl;
            continue;
            case 2:
            cout << "c" << endl;
            continue;
            case 3:
            cout << "d" << endl;
            continue;
            case 4:
            cout << "e" << endl;
            continue;
        }
    }
    return 0;
}