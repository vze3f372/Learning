#include<stdio.h>
#include<string.h>

char str[40] = "Hello World!\n";


int main(void) {

	for(int i=0; i<strlen(str);i++) {
	
		putchar(str[i]);

	}

	return 0;
}
