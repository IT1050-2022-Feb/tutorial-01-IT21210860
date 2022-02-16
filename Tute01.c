/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float average , mark01 , mark02 ; //Declaring variables.

  printf("Please input the marks of subject 01 ......\n"); // Display message to the user.
  scanf("%f", &mark01); // Reads the user input.

  printf("Please input the marks of subject 02 ......\n"); // Display the message to the user.
  scanf("%f", &mark02); // Reads the user input.

  average = (mark01 + mark02) / 2.00 ; // Average marks calculation.

  printf("Average marks are: %.2f", average); //Display the average.

  return 0;
}

