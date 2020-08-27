#include <stdio.h>

int main(){
	int m1, m2;
	printf("number1 = ");
	//m1 =getchar();
	scanf("%d", &m1);
	printf("number2 = ");
	scanf("%d", &m2);
	//getchar();
	//m2 =getchar();
	
	if(m1<0){
		printf("%d\n",m1);
	}else if(m2>m1){
		printf("%d가 %d보다 큽니다. \n",m2,m1);
	}else{
		printf("%d가 %d보다 큽니다. \n",m1,m2);
	}
	return 0;
}
