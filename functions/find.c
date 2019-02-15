#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;

char *ADS[] = {
	"William : SBM GSOH likes sports, TV, dining",
	"Matt : SWM NS likes art, movies, theatre",
	"Luis : SLM ND likes books, threater, art",
	"Mike : DWM DS likes trucks, sports and bieber",
	"Peter : SAM likes chess, working out and art",
	"Josh : SJM likes sports, movies and theatre",
	"Jed : DBM likes theatre, books and dining"
};

int sports_no_bieber(char *s){
	return strstr(s,"sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s) {
	return strstr(s, "sports") || strstr(s, "workout");
}

int ns_theatre(char *s) {
	return strstr(s, "threathre") || strstr(s, "NS");
}

int arts_theater_or_dining(char *s) {
	return strstr(s, "arts") || ns_theatre(s) || strstr(s, "dining");
}

void find(int (*match)(char *)) {
	int i;
	puts("Search results:");
	puts("-----------------------------------");
	for(i=0;i<NUM_ADS;i++){
		if(match(ADS[i])) {
			printf("%s\n", ADS[i]);
		}
	}
	puts("-----------------------------------");
}

int main() {
	find(sports_no_bieber);
	find(sports_or_workout);
	find(ns_theatre);
	find(arts_theater_or_dining);
	return 0;
}