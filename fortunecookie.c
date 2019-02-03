#include <stdio.h>

void fortune_cookie(char msg[]) {
	printf("Message reads: %s\n", msg);
	printf("msg occupies %lu bytes \n", sizeof(msg));
}

int main(){
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);
	printf("The quote string is stored at: %p\n", quote);
}

/*
evega@Esthers-MacBook-Pro headFirstC $ gcc fortunecookie.c -o fortunecookie
fortunecookie.c:5:44: warning: sizeof on array function parameter will return
      size of 'char *' instead of 'char []' [-Wsizeof-array-argument]
        printf("msg occupies %lu bytes \n", sizeof(msg));
                                                  ^
fortunecookie.c:3:26: note: declared here
void fortune_cookie(char msg[]) {
                         ^
1 warning generated.
*/