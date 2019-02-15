#include <stdarg.h>
#include <stdio.h>

void print_ints(int args, ...) { // ... means there are more arguments to come
	va_list ap; // to store the extra arguments that are passed to the function
	va_start(ap, args); // specify where the variable arguments start. C needs to be told the name of the last fixed argument
	int i;
	for (i = 0; i<args; i++){
		printf("argument: %i\n", va_arg(ap, int)); // now your arguments are all stored in the va_list you can read them with va_arg. va_arg takes two values: the va_list and the type of the next argument
	}
	va_end(ap); // Use va_end macro to tell C that you have finished reading all arguments
}

int main(){
	print_ints(3,79,101,32);
}