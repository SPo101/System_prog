#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RANGE 20
#define CNT 20
int main(){
	srand(time(NULL));
	
	int *arr = malloc(CNT*sizeof(int));	
	int *negative_arr = malloc(CNT*sizeof(int));
	int j=0;
	for(int i=0; i<CNT; i++){
		*(arr+i) = (rand() % RANGE) - (RANGE/2);
		printf("%d ", *(arr+i));
		if(*(arr+i) < 0){
			*(negative_arr+j) = i;
			j++;
		}
	}
	printf("\n");
	
	int mean=0;
	for(int i=0; i<j; i++){
		mean += *(arr + *(negative_arr+i));
		printf("%d ", *(negative_arr+i));
	}
	printf("\nmean = %d\n", mean/j);
	
	free(arr);	
	free(negative_arr);
}
