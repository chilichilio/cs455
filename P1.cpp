#include <iostream>
using namespace std;

int main() {
    cout << "hello world" << endl;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  random() is a function that "returns" 
  (outputs/generates/creates) a value
  double r = rand(); 
  cout << r << endl;
    cout << time(NULL) << endl;
}



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(NULL));
  // double r = ((double)rand())/RAND_MAX; 

  double r = ((double)rand())/RAND_MAX; 
  for(int i = 0; i < 1; i++){
        r = ((double)rand())/RAND_MAX;
  if(r < 0.5) {
    cout << "Lucky!" << endl;
  }
  }
}

matrix multiplication
#include <iostream>
using namespace std;

int main(){
  int row = 2, col =3;
  int array1[2][3] = {{1,3,3},{1,2,2}};
  int array2[3][2] = {{1,3},{3,1},{2,2}};
  int result[2][2] = {{0,0},{0,0}};
  for(int nr=0;nr<row;nr++){
      for(int nc=0;nc<col;nc++){
          if(nr==0){
              result[nr][nr] += array1[nr][nc]*array2[nc][nr];
              result[nr+1][nr] += array1[nr+1][nc]*array2[nc][nr];
              }
          else{
              result[nr-1][nr] += array1[nr][nc]*array2[0][nc];
              result[nr][nr] += array1[nr][nc]*array2[0][nc];
              }
          }
  }
  for(int m=0;m<row;m++){
      for(int n=0;n<row;n++){
          cout << result[m][n] << endl;
          }
      }

  return 0;
}