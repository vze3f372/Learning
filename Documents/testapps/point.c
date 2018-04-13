

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int* x;
	x = malloc(sizeof(int));
	*x = 13;


	printf("%d", *x);
	printf("This whole thing is a bit confusing \n");
	
	free(x); 
	return 0;

}



