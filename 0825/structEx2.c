#include <stdio.h>

int main(){
	struct MT{ //
		int na;
		double ki;
	};
	struct MT M1;
	struct MT M2;
	
	M1.na = 22;
	M2.ki = 175.5;
	printf("%d\n",M1.na);
	printf("%f\n",M2.ki);
}
