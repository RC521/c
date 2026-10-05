#include<stdio.h>

int main(int argc,char*argv[]){
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char inital = 'A';
	char firstname[] = "cxy";
	char lastname[] ="rxy";
	
	printf("RXY is %d kilometer away from me.\n",distance);
	printf("she is %f leave power.\n",power);
	printf("she have %f super power.\n",super_power);
	printf("I have an inital %c.\n",inital);
	printf("I am %s .\n",firstname);
	printf("She is %s.\n",lastname);
	printf("%s love %s.\n",firstname,lastname);
	return 0;
}
