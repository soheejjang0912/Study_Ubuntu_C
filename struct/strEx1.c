#include <stdio.h>

int main(){ 
	 
	 struct SCORE{ 
		 char hakjum;
		 int jumsu;
	 };
	 
	 struct SCORE S;
	 S.hakjum = 'A';
	 S.jumsu = 92;
	 puts("<성적>");
	 printf("%c, %d",S.hakjum ,S.jumsu);
	 printf("S구조체는 \n %ld바이트 입니다.",sizeof(S));
	return 0;
} 
