#include<stdio.h>

void getEndianness(){
  //unsigned int i = 0x12345678;
  unsigned int i = 1;
  printf("%x\n", i);
  unsigned char *c = (char*)&i;
  printf("%x\n", *c);
  c++;
  printf("%x\n", *c);
  c+=2;
  printf("%x\n", *c);
  if(*c)
    printf("Little Endian : \n");
  else
    printf("Big Endian : %c\n");
}

int main(){
  getEndianness();
  return 0;
}
