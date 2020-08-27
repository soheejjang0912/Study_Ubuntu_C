#include <stdio.h>
//변수의 타입
//정적변수!
static int a= 100; 
static int b= 3; //정적변수
void haha(){
	printf("하하 a = %d, b = %d\n",a,b);
	printf("하하 a = %d\n",a);
	a=200; //main에 영향 X
	} 
void hoho(){
	printf("호호 a = %d, b = %d\n",a,b);
	a=300; b = 5;
	}
int main(){
	//int a;
	//a= 50;
	printf("메인 a = %d, b = %d\n",a,b);
	haha();
	hoho(); 
	printf("메인 a = %d, b = %d\n",a,b); 
	return 0;
}

