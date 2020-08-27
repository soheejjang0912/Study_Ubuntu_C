#include <stdio.h>
int main(){
	char a,b,c,d,e;
	a= -128;
	b = ~a; //not~~~~~~~~~~~~~~
	c = b+1;
	d = ~~a;
	e = ++a + b--;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	printf("e = %d\n",e);
}
