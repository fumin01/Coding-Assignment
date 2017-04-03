/*
 * homework1.c
 *
 *  Created on: Apr 1, 2017
 *      Author: coolkys
 */

#include <stdio.h>
#include <math.h>

int general(){
	int a,b;

	printf("\n input a:");
	scanf("%d",&a);
	printf("\n input b:");
	scanf("%d",&b);

	if(b==0){
		printf("0 is not accepted as a divisor!");
		general();
	}

	else{
	double c = (double)a / (double)b;
	printf("\n a+b = %d \n a-b = %d \n a*b = %d \n a/b = %f \n", a+b, a-b, a*b, c);
	}

	return 0;
}

int Powercalc(){
	int a,b;

		printf("\n input base:");
		scanf("%d",&a);
		printf("\n input exponent:");
		scanf("%d",&b);

		printf("a^b = %f", pow(a,b));
		return 0;
}

int sqroot(){
	int a,b,c;

		printf("\n When a,b,c is ax^2 + bx + c = 0");
	    printf("\n input a:");
		scanf("%d",&a);
		printf("\n input b:");
		scanf("%d",&b);
		printf("\n input c:");
		scanf("%d",&c);

		printf("\nSolution: x = {%d (+/-)sqrt(%f - %d)} / %d ", -b, pow(b,2), 4*a*c, 2*a);
		return 0;


}
void main(){

	int input;
	printf("Select calculator type:\n");
	printf(" 1: General calculator\n 2: Power calculator \n 3: square equation solver\n");
	scanf("%d",&input);

	switch(input){

	case 1:
		general();
		break;
	case 2:
		Powercalc();
		break;
	case 3:
		sqroot();
		break;

	}
}
