#include<stdio.h>
#include<stdbool.h>

int numBits(int n){
  int count = 0;
  while(n){
    count++;
    n = n>>1;
  }
  return count;
}

bool isPalin(int n){
  int right = numBits(n) - 1;
  int left = 0;
  while(left < right){
    if(((n>>left) & 1) != ((n>>right) & 1)){
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main(){
  int x = 9, y = 10;
  if(isPalin(x))
    printf("%d is in Palindrome\n", x);
  else
    printf("%d is not in Palindrome\n", x);
  if(isPalin(y))
    printf("%d is in Palindrome\n", y);
  else
    printf("%d is not in Palindrome\n", y);
  return 0;  
}
