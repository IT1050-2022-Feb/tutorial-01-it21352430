/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2;
  float average;

  printf("enter the first mark :");
  scanf("%d",&mark1);

  printf("enter the second mark :");
  scanf("%d",&mark2);

  average=(mark1+mark2)/2.0;

  printf("Average mark is %.2f",average);

  return 0;
}

