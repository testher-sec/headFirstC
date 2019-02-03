#include <stdio.h>
#include <string.h>

// ARRAY OF POINTERS
char *names_for_dog[] = {"Bowser", "Bonza", "Snodgrass"};

char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
};

void find_track(char search_for[]) {
	int i;
	for (i=0;i<5;i++) {
		if(strstr(tracks[i], search_for))
			printf("Track %i: '%s'\n", i, tracks[i]);
	}
}

void print_reverse(char *s) {
	size_t len = strlen(s);

	char *t = s + len - 1;
	while(t >= s) {
		printf("%c", *t);
		t = t - 1;
	}
	puts("");
}

int main() {
	char search_for[80];
	printf("Search for: ");
	// problem with this one... it includes the new line \n, we'd need to trim it
	//fgets(search_for, 80, stdin);
	scanf("%79s", search_for);
	find_track(search_for);
	return 0;
}
