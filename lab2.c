
/* Ryan Chen
CpSc 101 Lab, Fall 2023
Lab #2
My second C program.
*/ 


#include <stdio.h>
#include <math.h>
int main (void) {
	/* Variable declarations */
	// variables for showingrecedence and integer truncation
	// 1. missing a comma after x = 3
	int x = 3, y = 8, z = -10, result;

	// variables needed for volume of a sphere
	// const float PI = 3.141592;  // defines a constant: will not allow									 // its value to be changed
	// 2. missing semicolon
	float volume = 0;    			
	int radius = 0;

	/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
	/* First part:  Show precedence and integer trucation */
	// Forgetting parenthesis after '3( * x)
	result = x + ( (5 * y) / (3 * x) );
	printf("\nresult of x + ( (5 * y) / (3 * x) ) is %d", result);
	// 3. missing parenthesis after x
	result = x + (5 * (y / 3) * x);
	
	// 4. missing parenthesis after 'result'
	printf("\nresult of x + (5 * (y / 3)) * x is %d\n", result);

	// Reusing variables for more precedence and truncation examples
	x = 4;
	// 5. missing semicolon after y = 3
	y = 3;
	result = y + z / x;
	// 6. missing parenthesis and used single quotation instead of double
	printf("\nresult of y + z / x is %d, NOT %.2f  \n", result, -1.75);


	/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
	/* Second part:  volume of a sphere */
	// Get user input
	// 7. missing parenthesis before Enter
	// 8. missing semicolon after line of code
	// 9. missing quotations after '%d'	
	printf("Enter radius: ");
	scanf("%d", &radius);     			

	// volume of a sphere = 4/3 * PI * r * r * r
	// 10. changed 'r's to already defined variable 'radius'
	// 11. included '(float)' to get sufficient amount of decimal placements for the correct answer 
	volume = (float) x / y * M_PI * pow(radius, 3.0);

	// Print sphere radius and volume
	// 12. included 4 and 3 in printf statement to be included for the volume of a sphere
	printf("\nSphere volume = (%d / %d * PI * radius * radius * radius) = ", 4, 3);
	printf("%.2f\n", volume);		

	return 0;
}



