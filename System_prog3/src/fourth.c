#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define RANGE 40
#define CNT 14

int main(){
	srand(time(NULL));
	
	int *B = malloc(CNT*sizeof(int));
	double *C = malloc(CNT*sizeof(double));

	int j=0;
	for(int i=0; i<CNT; i++){
		*(B+i) = (rand() % RANGE) - (RANGE/2);
		if(*(B+i) > 0){
			*(C+j) = sqrt(*(B+i))/5;
			j++;
		}
	}

	for(int i=0; i<j; i++)
		printf("%f ", *(C+i));
	printf("\n");

	int a;	
	double b;
	for(int k=0; k<j; k++){
		a = 0;
		for(int i=0; i<j-k; i++)
			if(*(C+a) < *(C+i))
				a = i;

		b = *(C+j-1-k);
		*(C+j-1-k) = *(C+a);
		*(C+a) = b;
	}
	
	printf("\n");
	for(int i=0; i<j; i++)
		printf("%f ", *(C+i));
	free(B);
	free(C);
}
