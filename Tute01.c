/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int distance,amount;

  printf("enter the distance van has travelled :");
  scanf("%d",&distance);

  if(distance<=30)
  {
    amount=distance*50;
  }
  else if(distance>30)
  {
    amount=30*50+(distance-30)*40;
  }

  printf("amount to be paid :%d",amount);

  return 0;
}

