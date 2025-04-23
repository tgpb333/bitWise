//Here is a C program that waits for the 11th bit of register A to be set and then toggles the 12th bit of register B

#include<stdio.h>

int main(){
  unsigned int regA = 0, regB = 0;
  printf("Initial values: regA = %u, regB = %u\n", regA, regB);
  regA |= (1 << 10); 
  printf("regA after setting 11th bit: %u\n", regA);
  while(!(regA & (1<<10))){
    
  }
  regB = regB ^ (1<<11);
  printf("regB after toggling 12th bit: %u\n", regB);
}

//Second Implementation

#include <stdio.h>

// Function to wait for the 11th bit of register A to be set
void waitForBit11Set(unsigned int *regA) {
  while (!(*regA & (1 << 10))) {
    // Wait until the 11th bit (bit 10, since it is 0-indexed) is set
  }
}

// Function to toggle the 12th bit of register B
void toggleBit12(unsigned int *regB) {
  *regB ^= (1 << 11); // Toggle the 12th bit (bit 11, since it is 0-indexed)
}

int main() {
  unsigned int regA = 0;
  unsigned int regB = 0;
  
  printf("Initial values: regA = %u, regB = %u\n", regA, regB);

  // Simulate setting the 11th bit of regA (in real scenario, this would be set by external hardware or an interrupt)
  regA |= (1 << 10); 
  printf("regA after setting 11th bit: %u\n", regA);

  waitForBit11Set(&regA);
  toggleBit12(&regB);

  printf("regB after toggling 12th bit: %u\n", regB);

  return 0;
}
