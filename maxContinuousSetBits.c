#include<stdio.h>

int maxSetBits(int n){
  int maxCount = 0, localmax = 0;
  while(n){
    if(n & 1){
      localmax++;
    }
    else
      localmax = 0;
    if(localmax > maxCount){
      maxCount = localmax;
    }
    n >>= 1;
  }
  return maxCount;
}

int main()
{
    // Function Call
    int testVar1 = maxSetBits(14);
    int testVar2 =  maxSetBits(222);
    printf("%d\n", testVar1);
    printf("%d\n", testVar2);
    return 0;
}
