#include <stdio.h>

int main(){ 
	int B[2][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
	int i = 0,j = 0,k = 0;
	 
	for(i=0 ; i <2 ; i++){ 
		for(j=0 ; j <2 ; j++){
			for(k=0 ; k <3 ; k++){
				printf("B[%d][%d][%d] = %d\n",i,j,k,B[i][j][k]);
			}
		}
	}
	return 0;
} 
