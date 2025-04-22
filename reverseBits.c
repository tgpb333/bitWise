#include<stdio.h>

int reverseBits(int n){
  int numBits = sizeof(n)*8;
  int res = 0;
  while(n){
    res <<= 1;
    res |= n&1;
    n >>= 1;
    numBits--;
  }
  return res<<numBits;
}

int main()
{
    unsigned int x = 1;
    printf("%u", reverseBits(x));
  	return 0;
}
