#include <stdio.h>

void skipMsg(char *msg, int offset) {
	puts(msg + offset);
}

int main()
{
	int contestants[] = {1, 5, 7};
	//printf("%d\n", contestants[1]);
	//printf("%d\n", *(contestants+2));
	int *choice = contestants;
	//printf("%d\n", *(choice+1));
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("I'm going to pick contestant number %i\n", contestants[2]);

	char *msg_from_amy = "Don't call me";
	skipMsg(msg_from_amy, 6);
	return 0;
}

