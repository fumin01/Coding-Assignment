#include <stdio.h>
#include <math.h>

void equation();
void calcu();

main(void)
{
	int a, b, c, inputv1, inputv2;
	double num1, num2, result;
	double x1, x2;

	while(1)
	{
	
		printf("\n\n 이차방정식은 1을 누르세요. \n 계산기는 2를 누르세요. \n 나가고 싶으면 1, 2말고 아무거나 누르세요.\n");
		scanf("%d", &inputv1);
	
		if(inputv1==1) //이차방정식  
		{
			equation();
			/*
			printf("ax2 + bx + c =0 에서 a, b, c 값을 입력하시오.\n");
			
			printf("\n a=");
			scanf("%d", &a);
			
			printf("\n b=");
			scanf("%d", &b);
			
			printf("\n c=");
			scanf("%d", &c);
			
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			
			printf("\n x1 = %lf", x1);
			printf("\n x2 = %lf", x2);
			*/
		}
		else if(inputv1==2) //계산기  
		{
			calcu();
			/*
			printf("\n 더하기는 1, 곱하기는 2 를 누르세요.") ;
			scanf("%d", &inputv2);
			
			
			if(inputv2==1) // 더하기  
			{
				printf("\n First Number=");
				scanf("%lf", &num1);
		
				printf("\n Second Number=");
				scanf("%lf", &num2);
		
				result=num1+num2;
				printf("\n %lf + %lf = %lf \n", num1, num2, result);			
			}
			else if(inputv2==2) // 곱하기  
			{
				printf("\n First Number=");
				scanf("%lf", &num1);
		
				printf("\n Second Number=");
				scanf("%lf", &num2);
		
				result=num1*num2;
				printf("\n %lf * %lf = %lf \n", num1, num2, result);		
			}
			*/
		}
		else
			break; 

	}

}

void equation(void) //이차방정식  
{
	
int a, b, c;
double x1, x2;

	printf("ax2 + bx + c =0 에서 a, b, c 값을 입력하시오.\n");
	
	printf("\n a=");
	scanf("%d", &a);
	
	printf("\n b=");
	scanf("%d", &b);
	
	printf("\n c=");
	scanf("%d", &c);
	
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	
	printf("\n x1 = %lf", x1);
	printf("\n x2 = %lf", x2);
	
}

void calcu()// 계산기    
{
	int inputv2;
	double num1, num2, result;
	
	printf("\n 더하기는 1, 곱하기는 2 를 누르세요.") ;
	scanf("%d", &inputv2);
	
	
	if(inputv2==1) // 더하기  
	{
		printf("\n First Number=");
		scanf("%lf", &num1);

		printf("\n Second Number=");
		scanf("%lf", &num2);

		result=num1+num2;
		printf("\n %lf + %lf = %lf \n", num1, num2, result);			
	}
	else if(inputv2==2) // 곱하기  
	{
		printf("\n First Number=");
		scanf("%lf", &num1);

		printf("\n Second Number=");
		scanf("%lf", &num2);

		result=num1*num2;
		printf("\n %lf * %lf = %lf \n", num1, num2, result);		
	}
}

