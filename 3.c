#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define Size 99
#define Num 10
int main() {
 int i, data[Size], a, b;
 srand((unsigned) time(NULL) + getpid());
 data[0] = 99;
 
 for(i = 1; i < Size; ++i)
  data[i] = i;
  
 for(i = 0; i < Size; ++i){
  b = 99 * rand() / RAND_MAX;
  a = data[i];
  data[i] = data[b];
  data[b] = a;
 } 

 for(i = 0; i < Num; ++i)
  printf("%d ", data[i]);
  
 return 0;
}
