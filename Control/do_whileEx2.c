#include <stdio.h>
void good(){ 
	printf("Good Morning\n");
}

int sum(int a){
	int hab;
	hab=0;
	do{ 
			a++; 
			hab += a; 
		}while(a <= 10); //=이 꼭 뒤에 쓰일 것 !  
	
	return hab;
	}

int main(){
		int su, sol;
		su=0;
		good();
		//sum(hab);
		sol = sum(su);
		printf("0부터 10까지의 합은 %d 입니다.",sol); 
		return 0;
}	
