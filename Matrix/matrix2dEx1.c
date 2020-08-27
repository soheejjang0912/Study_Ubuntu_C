#include <stdio.h>

int main(){ 
	float K[3][2] ={{1.1,2.2},{3.1,4.2},{5.1,6.2}};
	int i,j;
	 
	puts("<0행값>\n");
	for(i=0; i<=1; i++){
		printf("K[0][%d} = %6.1f \n",i,K[0][i]);
	}
	puts("<1행값>\n");
	for(i=0; i<=1; i++){
		printf("K[1][%d} = %6.1f \n",i,K[1][i]);
	} 
	puts("<2행값>\n");
	for(i=0; i<=1; i++){
		printf("K[2][%d} = %6.1f \n",i,K[2][i]);
	} 
	
	for (i=0; i<=3; i++){
		for(j=0; j<=1; j++){
		printf("K[%d][%d] = %6.1f \n",i,j,K[i][j]);
	} 
}
	return 0;
}

