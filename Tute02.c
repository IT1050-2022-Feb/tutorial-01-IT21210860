/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
	float distance , amount ; // Declaring variables.
	
	printf("Enetr the distance the van has travelled...\n"); // Display the message to the user.
	scanf("%f", &distance); // Reads the user input.
	
	if (distance <= 30){
		amount = distance * 50.00 ; // Calculation.
	}
	
	else {
		amount = 30.00 * 50.00  + (distance - 30.00) * 40.00 ; // Calculation.
	}
	
	printf("Total calculated amount is: %.2f", amount); // Display the total amount to be paid.
		
	
  return 0;
}
