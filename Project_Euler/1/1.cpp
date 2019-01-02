#include <iostream>
using namespace std;

int main(){
  int i, count=0,sum=0;
    int a[1000];
    for( i=1;i<1000;i++){
      if(i%3==0 || i%5==0){
        count=count+i;
      }
    }
    cout << count;
  return 0;
}