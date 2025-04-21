#include<stdio.h>

void reverse(char* res, int start, int end){
  while(start < end){
    char temp = res[start];
    res[start] = res[end];  
    res[end] = temp;
    start++;
    end--;
  }
}

char* decToBin(int n){
  int index = 0;
  char* res = (char*)malloc(32*sizeof(char));
  while(n){
    int bit = n&1;
    res[index++] = '0' + bit;
    n = n >> 1;
  }
  res[index] = '\0';
  reverse(res, 0, index-1);
  return res;
}

int main() {
    int n = 12;
    char* bin = decToBin(n);
  
    printf("%s", bin);
    return 0;
}
