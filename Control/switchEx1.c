#include <stdio.h>

int main(){
	char m1;
	printf("number1 = "); 
	//m1= getchar();  
	scanf("%c", &m1);
	//m1= 'B';
	printf("%c\n",m1);
	switch(m1){
		case 'A': printf("일");printf("배고파");
		break; 
		case 'B': printf("이");
		break;
		case 'C': printf("삼");
		break;
		case 'D': printf("사");
		break;
		default: printf("A~C에 해당되지 않습니당");break;
	}
		
	return 0;
}
