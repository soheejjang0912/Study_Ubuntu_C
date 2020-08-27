#include <stdio.h>

// scanf는 변수에서 값을 받을 때 사용하고, getchar은 표준 입력으로부터 아무값이나 받아 올 때 사용한다.
int main(){
	char m1, m2;
	printf("첫 번째 문자?");
	m1 = getchar(); //사용자 입력 받기
	printf("두 번째 문자?");
	getchar();  //m1 의 enter 에도 입력값이 있기때문에 한번 더 넣어준다.
	m2 = getchar();
	printf("%c와 %c를 입력함 \n",m1,m2);
	//문자열 입 출력
	char irum[20];
	char color[20];
	printf("꽃 이름은 ?");
	scanf("%s",irum);
	
	printf("꽃 색상은?");
	scanf("%s",color);
	
	printf("꽃 이름은 %s이고, 꽃 색장은 %s 입니다.", irum, color);
}
