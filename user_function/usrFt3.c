#include <stdio.h>

	void mob(int *ap, int *bp){
		*ap = 15;
		*bp = 25;
	}
	
	int main(){ 
		int a,b;
		a= 30; b=40;
		printf("a = %d , b= %d 다아 ", a,b);
		mob(&a, &b);  
		printf("a = %d , b= %d 다아 ", a,b); 
	}
	

