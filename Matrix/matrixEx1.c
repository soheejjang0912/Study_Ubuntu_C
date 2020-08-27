#include <stdio.h>

int main(){
	int i;
	int M[4];
	int E[4] ={4,4,5,5};
	M[0] = 2;
	M[1] = 3;
	M[2] = 4;
	M[3] = 5;
	
	for (i=0 ; i<4 ;i++){
		printf("M = %d",M[i]); 
	}
	return 0;
}

