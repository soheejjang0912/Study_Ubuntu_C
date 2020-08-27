#include <stdio.h>

int main(){
	/*여러줄의
	 * 주석문*/
	//한줄 주석
	//정수형 상수
	printf("정수 값 출력 : "); printf("%d\n",10);
	//실수형 상수
	printf("실수 값 출력 : "); printf("%f\n",120.45);
	printf("지수 값 출력 : "); printf("%e\n",120.45);
	//문자형 상수 '' 하나의 글자 사용할 때
	char A;
	A=65;
	printf("문자 값 출력 : "); printf("%c\n",A);
	printf("문자(A)의 bytes수 출력 : "); printf("%ld\n", sizeof(A));
	//문자열 상수 "" 하나 이상
	printf("문자열 출력 : "); printf("%s\n", "String Value");
	printf("문자열(S****)의 bytes수 출력 : "); printf("%ld\n", sizeof("String Value")); //문자열ㅇ르 표현하면 '0'(Null값 이라고 한다)이 이 문자열에 자동 추라1byte 올라감
}
