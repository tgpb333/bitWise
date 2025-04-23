#include<stdio.h>

int firstSetBit(int n){
  int res = 1;
  while(!(n&1)){
    res++;
    n >>= 1;
  }
  return res;
}

int main(){
  int n = 18;
  printf("First Set Bit at pos : %d", firstSetBit(n));
  return 0;
}
