#include <stdio.h>

int main(){ 
	int M[4] ={1,2,3,4};
	int *p;
	
	p=M;
	puts("<요소값>");
	printf("%d\n",*p);
	printf("*(p+1) = %d, M[1] = %d, *(M+1) = %d",*(p+1),M[1],*(M+1));
	printf("%d\n",*(p+2));
	puts("포인터의 이동");
	p++;
	printf("%d\n",*p);
	p+= 2;
	printf("%d\n",*p); 
	puts("포인터의 감소");
	p--;
	printf("%d\n",*p);
	printf("%d\n",*(p-1));
	printf("%d\n",*(p-2));
	puts("값 변경");
	p-=2;
	*p=45;
	*(p+2)=55;
	printf("%d, %d, %d, %d",*p,M[0],M[1],M[2]);
	return 0;
}

