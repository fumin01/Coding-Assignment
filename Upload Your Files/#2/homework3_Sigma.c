/*
 * homework3_Sigma.c
 *
 *  Created on: May 13, 2017
 *      Author: coolkys
 */
#include <stdio.h>
#include <math.h>
int sigma(int k, int n, int a, int m)
{
	int ans = 0;
	for(int i=k; i<n+1; i++)
	{
		ans = ans + (int)pow((double)k,(double)m);
	}

	return a*ans;
}

int main()
{
	int k, n, a, m;
	printf("  n           \n");
	printf("*****         \n");
	printf(" *            \n");
	printf("  *   a*(x^m) \n");
	printf(" *            \n");
	printf("*****         \n");
	printf(" x=k          \n");
	printf("\n\nInput k, n, a, m:");
	scanf("%d %d %d %d",&k, &n, &a, &m);
	printf("\n ANS: %d\n",sigma(k,n,a,m));
	return 0;
}

