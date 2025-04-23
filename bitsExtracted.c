#include<stdio.h>

//Extracting k bits from num starting at position p, where 1st position is LSB
int getBitsExtracted(int num, int k, int p){
  return (num>>(p-1)) & ((1<<k) - 1);
}

int main()
{
    int number = 72, k = 5, p = 1;
    printf("The extracted number is %d", 
               getBitsExtracted(number, k, p));
    return 0;
}
