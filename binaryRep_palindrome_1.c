#include<stdio.h>
#include<stdbool.h>

bool isPalin(int n){
  int rev = 0, temp = n;
  while(temp){
    rev = (rev<<1) | temp&1;
    temp >>= 1;
  }
  return rev == n;
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
