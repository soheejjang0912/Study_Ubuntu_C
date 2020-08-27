#include <stdio.h>
int main() {
	int A;
	A = sizeof(12);
	printf("%d\n",A); 
	A = sizeof(12L);
	printf("%d\n",A); 
	printf("%ld\n",sizeof(12)); 
	}
