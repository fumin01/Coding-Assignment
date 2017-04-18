#include <stdio.h>

int general(double a,double b,int c,double d);
int reuse(int e);
int time(int T, int I, int M, int E, int G);
int date(int dat, int day, int month, int year, int day1);
 
 int main(void)
 {
 	int chs1, c, e, T, I, M, E, G, dat, day, month, year, day1;
 	double a, b, d;
 	printf("문자입력금지!\n");
 	printf("\n사용할 계산기 선택\n1.일반계산기\n2.시간계산기\n3.일(날짜)수계산기\n");
 	scanf("%d", &chs1);
	switch(chs1)
	{
		case 1:
			printf("\n두 개의 실수를 계산 순서대로 입력 : \n");
			scanf("%lf\n %lf", &a, &b);
			printf("\n1.더하기 2.빼기 3.곱하기 4.나누기: ");
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
			printf("입력오류\n");
	 } 
	 printf("\n\n다시 사용하시겠습니까?\n1.네        2.아니오\n");
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
			printf("입력오류\n");
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
				printf("다시 입력해주세요.\n");
				reuse(e); 
			}
	 }
 }
 
  int time(int T, int I, int M, int E, int G)
 {
 	printf("\n원하는 유형 선택.\n1.초 ㅡ> 시분초\n2.시 ㅡ> 분\n3.시 ㅡ> 초\n");
 	scanf("%d", &T);
 	switch(T)
 	{
 		case 1:
 			{
 				printf("\n초 입력\n");
				scanf("%d", &I);
				M = I/3600;
				E = (I%3600)/60;
				G = I%60;
				printf("%d초는 %d시간 %d분 %d초입니다.\n", I, M, E, G); 
				break;
			 }
			 
		case 2:
			{
				printf("\n시간 입력\n");
				scanf("%d", &I);
				M = I*60;
				printf("%d시간은 %d분입니다.\n", I, M);
				break;
			}
			
		case 3:
			{
				printf("\n시간 입력\n");
				scanf("%d", &I);
				M = I*3600;
				printf("%d시간은 %d초입니다.\n", I, M);
				break;
			}
			
		default:
			printf("입력오류\n");
	 }
 }
 
  int date(int dat, int day, int month, int year, int day1)
 {
 	printf("\n원하는 유형 선택.\n1.일 ㅡ> 년월일\n2.년 ㅡ> 월일\n3.년 ㅡ> 일\n");
 	scanf("%d", &dat);
 	printf("\n(단, 1개월=30일)\n");
 	switch(dat)
 	{
 		case 1:
 			printf("\n일수 입력\n");
 			scanf("%d", &day);
 			year = day/365;
 			month = (day%365)/30;
 			day1 = (day%365)%30;
 			printf("%d일은 %d년 %d개월 %d일입니다.", day, year, month, day1);
 			break;
 			
 		case 2:
 			printf("\n년수 입력\n");
			scanf("%d", &year);
			month = (year*365)/30;
			day =  (year*365)%30;
			printf("%d년은 %d개월 %d일입니다.", year, month, day);
			break;
			
		case 3:
			printf("\n년수 입력\n");
			scanf("%d", &year);
			day = year*365;
			printf("%d년은 %d일입니다.", year, day);
			break;
			
		default:
			printf("입력오류\n"); 
 			
	 }
 }
