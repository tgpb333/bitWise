#include<stdio.h>

int maxSetBits(int n){
  int count = 0;
  while(n){
    n = n & (n<<1);
    count++;
  }
  return count;
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
