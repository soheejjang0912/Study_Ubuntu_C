#include <stdio.h>
//포인터어어어 
/* 프로그램은 저장공간으 대상으로 일함
 * 메모리의 대상
 * 
 * */
int main(){
	struct MT{ //
		int na;
		double ki;
	};
	struct MT M; 
	struct MT *mp;
	mp = &M;
	
	//M.na = 22;
	//M.ki = 175.5;
	mp->na = 345;
	mp->ki = 311.5;
	 
	printf("%d\n",M.na);
	printf("%f\n",M.ki);
}
