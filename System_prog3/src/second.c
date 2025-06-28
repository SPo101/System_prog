#include <stdio.h>
#include <stdlib.h>

int main(){
	float *a, *b, *c;
	a = malloc( 3*sizeof(float));
	b = a + sizeof(float);	
	c = b + sizeof(float);	

	*a = 1;
	*b = 2;
	*c = 3;
	printf("%f %f %f\n", *a, *b, *c);
	
	float q = *a;
	*a = *b;
	*b = q;

	printf("%f %f %f\n", *a, *b, *c);
	free(a);
}
