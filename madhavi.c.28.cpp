#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter a b c values");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c?:c):b>c?:c;
	printf("Biggest number is:%d",big);
	return 0;
}
