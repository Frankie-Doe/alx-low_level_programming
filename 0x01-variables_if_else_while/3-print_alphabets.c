#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 */

int main(void) 
{
  char letter;
  
  // Print lowercase alphabet
  for (letter = 'a'; letter <= 'z'; letter++) {
    putchar(letter);
  }
  
  // Print uppercase alphabet
  for (letter = 'A'; letter <= 'Z'; letter++) {
    putchar(letter);
  }
  
  // Print new line
  putchar('\n');
  
  return 0;
}

