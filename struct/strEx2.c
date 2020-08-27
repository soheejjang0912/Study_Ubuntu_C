#include <stdio.h>

int main(){ 
	 
	 struct SCORE{ 
		 char *name;
		 int age;
		 float tall;
	 };
	 
	 struct SCORE M;
	 
	 M.name = "maria";
	 M.age = 26;
	 M.tall = 161.3;
	 puts("신상");
	 printf("name = %6s \n", M.name);
	 printf("age = %6d \n", M.age);
	 printf("talllllllll = %6f \n", M.tall);
	 return 0;
	 
	return 0;
} 
