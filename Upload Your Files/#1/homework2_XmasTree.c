/*
 * homework2_XmasTree.c
 *
 *  Created on: May 13, 2017
 *      Author: coolkys
 */
#include <stdio.h>

int main()
{
	for(int a=1; a<4; a++)
	{

		for(int b=0; b<(2*a+1); b++)
		{
			for(int c=0; c<(7-a)+(7-b);c++)
			{
				printf(" ");
			}
			printf("*");
			for(int c=b;c<(2*a-1)+(3*b); ++c)
			{
				printf(" ");
			}
			printf("*");

			printf("\n");
		}
		printf(" ");
		for(int c=0; c<7-(2*a-1); c++)
		{
			printf("  ");
		}
		for(int c=0; c<2*a-1; c++)
		{
			printf("*");
		}
		for(int c=0; c<2*a-1; c++)
		{
			printf("  ");
		}
		for(int c=0; c<2*a-1; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int a=0; a<3; a++)
	{
		printf("          *        *\n");
	}
	printf("        HAPPY CHRISTMAS\n");
	return 0;
}


