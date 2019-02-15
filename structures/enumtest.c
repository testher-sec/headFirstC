#include <stdio.h>

typedef enum {
	COUNT, POUNDS, PINTS
} units_of_measure;

typedef union {
	short count;
	float weight;
	float volume;
} quantity;

typedef struct{
	const char *name;
	const char *country;
	quantity amount;
	units_of_measure units;
} fruit_order;

void display(fruit_order order) {
	printf("This order contains ");
	if (order.units == PINTS)
		printf("%2.2f pints of %s\n", order.amount.volume, order.name);
	else if (order.units == POUNDS)
		printf("%2.2f LBS of %s\n", order.amount.weight, order.name);
	else
		printf("%i %s\n", order.amount.count, order.name);
}

int main() {
	fruit_order apples = {"apples", "England", .amount.count=144, COUNT};
	fruit_order strawberries = {"strawberries", "Spain", .amount.weight=17.6, POUNDS};
	fruit_order oj = {"orange juice", "U.S.A", .amount.volume=10.5, PINTS};

	display(apples);
	display(strawberries);
	display(oj);
	return 0;
}

///////////////////

typedef struct {
	unsigned int first_visit:1;
	unsigned int come_again:1;
	unsigned int fingers_lost:4;
	unsigned int shark_attack:1;
	unsigned int days_a_week:3;
}
