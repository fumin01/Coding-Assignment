#include <stdio.h>

int general(double a,double b,int c,double d);
int reuse(int e);
int time(int T, int I, int M, int E, int G);
int date(int dat, int day, int month, int year, int day1);
 
 int main(void)
 {
 	int chs1, c, e, T, I, M, E, G, dat, day, month, year, day1;
 	double a, b, d;
 	printf("�����Է±���!\n");
 	printf("\n����� ���� ����\n1.�Ϲݰ���\n2.�ð�����\n3.��(��¥)������\n");
 	scanf("%d", &chs1);
	switch(chs1)
	{
		case 1:
			printf("\n�� ���� �Ǽ��� ��� ������� �Է� : \n");
			scanf("%lf\n %lf", &a, &b);
			printf("\n1.���ϱ� 2.���� 3.���ϱ� 4.������: ");
			scanf("%d", &c);
			general(a,b,c,d);
			break;
			
		case 2:
			time(T,I,M,E,G);
			break;
			
		case 3:
			date(dat, day, month, year, day1);
			break;
			
		default:
			printf("�Է¿���\n");
	 } 
	 printf("\n\n�ٽ� ����Ͻðڽ��ϱ�?\n1.��        2.�ƴϿ�\n");
	 reuse(e);
 }
 
 int general(double a,double b,int c,double d)
{
	switch(c)
	{
		case 1:
			d=a+b;
			printf("%lf", d);
			break;
			
		case 2:
			d=a-b;
			printf("%lf", d);
			break;
			
		case 3:
			d=a*b;
			printf("%lf", d);
			break;
			
		case 4:
			d=a/b;
			printf("%lf", d);
			break;
			
		default:
			printf("�Է¿���\n");
	}
	return d;
 }
 
  int reuse(int e)
 {
 	scanf("%d", &e);
 	printf("\n");
 	switch(e)
 	{
 		case 1:
 			{
 				main();
			 }
			 
		case 2:
			{
				return 0;
			}
			
		default:
			{
				printf("�ٽ� �Է����ּ���.\n");
				reuse(e); 
			}
	 }
 }
 
  int time(int T, int I, int M, int E, int G)
 {
 	printf("\n���ϴ� ���� ����.\n1.�� ��> �ú���\n2.�� ��> ��\n3.�� ��> ��\n");
 	scanf("%d", &T);
 	switch(T)
 	{
 		case 1:
 			{
 				printf("\n�� �Է�\n");
				scanf("%d", &I);
				M = I/3600;
				E = (I%3600)/60;
				G = I%60;
				printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", I, M, E, G); 
				break;
			 }
			 
		case 2:
			{
				printf("\n�ð� �Է�\n");
				scanf("%d", &I);
				M = I*60;
				printf("%d�ð��� %d���Դϴ�.\n", I, M);
				break;
			}
			
		case 3:
			{
				printf("\n�ð� �Է�\n");
				scanf("%d", &I);
				M = I*3600;
				printf("%d�ð��� %d���Դϴ�.\n", I, M);
				break;
			}
			
		default:
			printf("�Է¿���\n");
	 }
 }
 
  int date(int dat, int day, int month, int year, int day1)
 {
 	printf("\n���ϴ� ���� ����.\n1.�� ��> �����\n2.�� ��> ����\n3.�� ��> ��\n");
 	scanf("%d", &dat);
 	printf("\n(��, 1����=30��)\n");
 	switch(dat)
 	{
 		case 1:
 			printf("\n�ϼ� �Է�\n");
 			scanf("%d", &day);
 			year = day/365;
 			month = (day%365)/30;
 			day1 = (day%365)%30;
 			printf("%d���� %d�� %d���� %d���Դϴ�.", day, year, month, day1);
 			break;
 			
 		case 2:
 			printf("\n��� �Է�\n");
			scanf("%d", &year);
			month = (year*365)/30;
			day =  (year*365)%30;
			printf("%d���� %d���� %d���Դϴ�.", year, month, day);
			break;
			
		case 3:
			printf("\n��� �Է�\n");
			scanf("%d", &year);
			day = year*365;
			printf("%d���� %d���Դϴ�.", year, day);
			break;
			
		default:
			printf("�Է¿���\n"); 
 			
	 }
 }
