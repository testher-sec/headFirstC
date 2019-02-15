#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int scores[] = {543, 323, 32, 554, 11, 3, 112};

// a void pointer can store the address of any kind of data but you always need to cast it before using it

int compare_scores(const void* score_a, const void* score_b) {
	// values are always passed to the function as poiners, so the first thing you need to do is get the integer value from the pointers
	int a = *(int*) score_a;
	int b = *(int*) score_b;

	return a-b;
}

int compare_scores_desc(const void* score_a, const void* score_b) {
	// values are always passed to the function as poiners, so the first thing you need to do is get the integer value from the pointers
	int a = *(int*) score_a;
	int b = *(int*) score_b;

	return b-a;
}

typedef struct {
	int width;
	int height;
} rectangle;

int compare_areas(const void* a, const void* b) {
	rectangle recta = *(rectangle*)a;
	rectangle rectb = *(rectangle*)b;

	rectangle* ra = (rectangle*)a;
	rectangle* rb = (rectangle*)b;

	return (recta.width*recta.height) - (rectb.width*rectb.height);
}

int compare_names(const void* a, const void* b) {
	char ** sa = (char**)a;
	char** sb = (char**)b;
	return strcmp(*sa, *sb);
}

int compare_areas_desc(const void* a, const void* b) {
	return compare_areas(b,a);
}

int compare_names_desc(const void* a, const void* b) {
	return compare_names(b,a);
}

void display(int *scores) {
	puts("These are the scores in order: ");
    for(int j = 0; j < 7; j++) {
        printf("%d ", scores[j]);
    }
    printf("\n");
}

int main() {
	qsort(scores, 7, sizeof(int), compare_scores);
	display(scores);

	char *names[] = {"Karen", "Mark", "Brett", "Molly"};
	qsort(names, 4, sizeof(char*), compare_names);
	puts("These are the names in order:");
	for (int i = 0 ; i<4; i++){
		printf("%s\n", names[i]);
	}
	return 0;
}