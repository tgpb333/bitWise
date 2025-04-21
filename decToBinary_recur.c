// C program to convert a decimal
// number to binary number

#include<stdio.h>
#include<string.h>

int decToBinaryRecur(int n, char* bin){
  int index = 0;
  if(n==0){
    return 0;
  }
  index = decToBinaryRecur(n/2, bin);
  bin[index++] = n%2 + '0';
  return index;
}

char* decToBinary(int n){
  if(n==0)
    return '0';
  char* bin = (char*)malloc(32*sizeof(char));
  int len = decToBinaryRecur(n, bin);
  bin[len] = '\0';
  return bin;
}

int main() {
    int n = 17;
    char* bin = decToBinary(n);
  
    printf("%s", bin);
    return 0;
}
