

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int* y;
	y = malloc(sizeof(int));
	*y = 13;


	printf("%d", *y);
	printf("This whole thing is a bit confusing \n");
	
	free(y); 
	return 0;

}



