#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	int *a_p, *b_p;
	a_p = &a;
	b_p = &b;

	*a_p *= 2;
	*b_p /= 2;

	printf("%d %d\n", a, b);
}
