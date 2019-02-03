#include <stdio.h>
#include <stdlib.h>

int main() {
	char card_name[3];
	int count = 0;

	// can we check the value already? it hasnt been assigned yet!
	while(card_name[0] != 'X'){

		puts("Enter the card_name: ");

		scanf("%2s", card_name);
		int val = 0;

		switch (card_name[0]) {
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				continue;
			default:
				val = atoi(card_name);
				if (val<1 || val>10) {
					puts("I dont understand that value!");
					continue;
				}
			//atoi is a function in the C programming language that converts a string into an integer numerical representation. 
			//atoi stands for ASCII to integer. It is included in the C standard library header file stdlib.h
			}
		
		//printf("The card value is: %i\n", val );

		/* Check if the value is 3 to 6 */
		if ( (val> 2) && (val< 7))
			count ++;
			//puts("Count has gone up");
		/* Otherwise check if the card was 10, J, Q or K*/
		else if (val == 10)
			count--;
			//puts("Count has gone down");

		printf("Current count: %i\n", count);
	}

	return 0;
}