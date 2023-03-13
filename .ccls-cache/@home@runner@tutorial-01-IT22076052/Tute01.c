/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  float mark1, mark2, average;
  printf("Enter marks for the two subjects?\n");
  scanf("%f %f", &mark1, &mark2);
  average = (mark1 + mark2) / 2.0;
  printf("Average : %.2f\n", average);
  return 0;
}
