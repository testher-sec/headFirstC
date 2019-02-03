#include <stdio.h>
#include <unistd.h>

//./order_piza -d blabla -t 

int main(int argc, char *argv[]) {

	char *delivery ="";
	int thick = 0;
	int count = 0;
	char ch;

	while ((ch = getopt(argc, argv, "d:t")) != EOF) {
		switch(ch){
			case 'd':
				delivery = optarg;
				break;
			case 't':
				thick = 1; // True
				break;
			default:
				fprintf(stderr, "Unknown option: '%s'\n", optarg );
				return 1;
		}
	}

	// This is only once, optind knows the size!
	argc -= optind;
	argv += optind;

	if (thick)
		puts("Thick crust.");

	if (delivery[0])
		printf("To be delivered %s. \n", delivery);

	puts("Ingredients: ");
	for(count = 0; count < argc; count ++)
		puts(argv[count]);
	return 0;
}