#include<stdio.h>
int main()
{
	int p,t,r;
	double si,ci;
	printf("enter ptr values");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100.0;
	ci=p* pow (1+r/100.0,t)-p;
	printf("simple intrestis:%f\n",si);
	printf("compound intrest is:%f",ci);
return 0;
}
