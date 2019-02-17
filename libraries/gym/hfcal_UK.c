#include <stdio.h>
#include "hfcal.h"

void display_calories(float weight, float distance, float coeff) {
	printf("weight: %3.2f kg\n", weight/2.20456);
	printf("distance: %3.2f km\n", distance*1.609344);
	printf("calories burned: %4.2f cal\n", coeff * weight * distance );
}