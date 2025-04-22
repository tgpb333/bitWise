#include<stdio.h>

int countSetBits(int n){
  int count = 0;
  while(n){
    n &= n-1;
    count++;
  }
  return count;
}

int main()
{
    int i = 9;
    printf("%d", countSetBits(i));
    return 0;
}
