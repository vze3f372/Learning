

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("Hello World!");
	int* y;
	y = malloc(sizeof(int));
	*y = 13;


	printf("%d", *y);

	free(y); 
	return 0;

}



