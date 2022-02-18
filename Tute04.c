/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum (int a , int b);
int maximum (int c , int d);
int multiply (int e , int f);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : "); // Display the  message to the user.
   scanf("%d", &no1); // Reads the user input.
   printf("Enter a value for no 2 : "); // Dispaly the message to the user.
   scanf("%d", &no2); // Reads the user input.
   printf("%d ", minimum(no1, no2)); // Display the minimum.
   printf("%d ", maximum(no1, no2)); // Display the maximum.
   printf("%d ", multiply(no1, no2)); // Display the result.
   return 0;
}

int minimum (int a , int b)
{
	int result01;
	
	if ( a < b){
		result01 = a ;
	}
	
	else {
		result01 = b;
	}
	
	return result01;
}


int maximum (int c , int d)
{
	int result02;
	
	if ( c > d){
		result02 = c ;
	}
	
	else{
		result02 = d ;
	}
	
	return result02;
}


int multiply (int e , int f)
{
	int result03;
	result03 = e * f ;
	return result03;
}