#include <stdio.h>
#include "hfcal.h"

void display_calories(float weight, float distance, float coeff) {
	printf("weight: %3.2f lbs\n", weight);
	printf("distance: %3.2f miles\n", distance);
	printf("calories burned: %4.2f cal\n", coeff * weight * distance );
}