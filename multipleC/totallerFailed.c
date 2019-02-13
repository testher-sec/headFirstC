#include <stdio.h>
#include "totaller.h"

float total = 0.0;
short count = 0;
short tax_percent = 6;

int main() {
	float val;
	printf("Price of item:");
	while(scanf("%f", &val) == 1) {
		printf("Total so far: %.2f\n", add_with_tax(val)); // as the comnpiler hasnt read the function yet it assumes it returns an int. complaining about conflicting types
		// Fixing function order is a pain
		// Split the declaration from the definition!!!! :)))
		printf("Price of item: ");
	}
	printf("\nFinal total: %.2f\n", total);
	printf("Number of items: %hi\n", count );
	return 0;
}

float add_with_tax(float f){
	float tax_rate = 1 + tax_percent / 100.0 ; // by adding .0 you make the calculation work as a float.
	total = total + (f * tax_rate);
	count = count + 1;
	return total;
}