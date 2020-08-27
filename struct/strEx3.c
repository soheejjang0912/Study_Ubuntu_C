#include <stdio.h>

int main(){ 
	 
	 struct BT{ 
		 int nai ; 
		 float tall;
	 };
	 
	  struct BT B[3];
	  B[0].nai = 10; B[0].tall = 100.5;
	  B[1].nai = 17; B[1].tall = 120.5;
	  B[2].nai = 14; B[2].tall = 133.5;
	  
	  int i;
	  for (i=0; i<3; i++){
		  printf("age = %d\n" , B[i].nai);
		  printf("tall = %f\n" , B[i].tall);
	  }
	return 0;
} 
