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
	
		printf("\n\n ������������ 1�� ��������. \n ����� 2�� ��������. \n ������ ������ 1, 2���� �ƹ��ų� ��������.\n");
		scanf("%d", &inputv1);
	
		if(inputv1==1) //����������  
		{
			equation();
			/*
			printf("ax2 + bx + c =0 ���� a, b, c ���� �Է��Ͻÿ�.\n");
			
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
		else if(inputv1==2) //����  
		{
			calcu();
			/*
			printf("\n ���ϱ�� 1, ���ϱ�� 2 �� ��������.") ;
			scanf("%d", &inputv2);
			
			
			if(inputv2==1) // ���ϱ�  
			{
				printf("\n First Number=");
				scanf("%lf", &num1);
		
				printf("\n Second Number=");
				scanf("%lf", &num2);
		
				result=num1+num2;
				printf("\n %lf + %lf = %lf \n", num1, num2, result);			
			}
			else if(inputv2==2) // ���ϱ�  
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

void equation(void) //����������  
{
	
int a, b, c;
double x1, x2;

	printf("ax2 + bx + c =0 ���� a, b, c ���� �Է��Ͻÿ�.\n");
	
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

void calcu()// ����    
{
	int inputv2;
	double num1, num2, result;
	
	printf("\n ���ϱ�� 1, ���ϱ�� 2 �� ��������.") ;
	scanf("%d", &inputv2);
	
	
	if(inputv2==1) // ���ϱ�  
	{
		printf("\n First Number=");
		scanf("%lf", &num1);

		printf("\n Second Number=");
		scanf("%lf", &num2);

		result=num1+num2;
		printf("\n %lf + %lf = %lf \n", num1, num2, result);			
	}
	else if(inputv2==2) // ���ϱ�  
	{
		printf("\n First Number=");
		scanf("%lf", &num1);

		printf("\n Second Number=");
		scanf("%lf", &num2);

		result=num1*num2;
		printf("\n %lf * %lf = %lf \n", num1, num2, result);		
	}
}

