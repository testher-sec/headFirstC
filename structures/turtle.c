#include <stdio.h>

typedef struct {
	const char *name;
	const char *species;
	int age;
} turtle;

void almost_happy_birthday(turtle t) {
	t.age = t.age + 1;
	printf("Happy Birthday %s! You are now %i years old!\n", t.name, t.age);
}

// void happy_birthday(turtle *t) {
// 	(*t).age = (*t).age + 1;
// 	printf("Happy Birthday %s! You are now %i years old!\n", (*t).name, (*t).age);
// }

/* t->age means (*t).age */
void happy_birthday(turtle *t) {
	t->age = t->age + 1;
	printf("Happy Birthday %s! You are now %i years old!\n", t->name, t->age);
}

int main() {
	turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
	almost_happy_birthday(myrtle);
	printf("%s's age is now %i\n", myrtle.name, myrtle.age );
	happy_birthday(&myrtle);
	printf("%s's age is now %i\n", myrtle.name, myrtle.age );
	return 0;
}