#include <stdio.h>

void spc_char(a,b,c)
	int a,b;
	unsigned char c;
	{
		int i;
		for(i=1; i<=a; i++){
			putchar(' ');
		}
		
		for(i=1; i<=b; i++){
			putchar(c);
		}
		putchar('\n');
	}

	int main(){
		spc_char(3,1,'A');
		spc_char(2,2,'B');
		spc_char(1,3,'C');
		spc_char(0,4,'D');
	}
	

