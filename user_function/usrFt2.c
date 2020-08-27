#include <stdio.h>


	int main(){
		char M;
		char *mp;
		//int a;
		//int *ap;
		//a = 280;
		M='B';
		printf("%c\n",M);
		//printf("%d",a);
		
		mp = &M; //ap에 a가 위치한 시작주소 저장
		*mp = 'K' ;//그 어드레스의 내용을 
		printf("%c\n",M);
		printf("%c\n",*mp);
		printf("%c\n",*&M);
		//ap = &a; //ap에 a가 위치한 시작주소 저장
		//*ap = 435 ;//그 어드레스의 내용을 
		
		//printf("%d",a); 
	}
	

