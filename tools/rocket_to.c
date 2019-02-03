#include <stdio.h>
#include <unistd.h>

//rocket_to -e 4 -a Brasillia Tokyo London

int main(int argc, char *argv[]) {
	// a & e are valid options
	//The e is followed by a colon to tell getopt() that the -e needs to be followed by an extra argument.
	// getopt() will point to that argument with the optarg variable.
	while ((ch = getopt(argc, argv, "ae:")) != EOF) {
		switch(ch){
			case 'e':
				engine_count = optarg;
				break;
			case 'a':

		}

		// make sure we skip all the options we read
		argc -= optind; // optind stores the number of strings read from the command line to get past the options
		argv += optind;
	}
	// after this, argv = [ "Brasilia", "Tokyo", "London"];
}