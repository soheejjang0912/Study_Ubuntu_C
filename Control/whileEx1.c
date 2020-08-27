#include <stdio.h>

int main(){
	int a,b;
	a=1;
	while(a<=10){
		for(b=1; b<=a; b++) printf("%d",b);
		putchar('\n');
		a++;
	}
	return 0;
}
