#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0,temp,digits=0;
	printf("enter n value");
	scanf("%d" ,&n);
	temp=n;
	while(temp!=0)
	{
		digits++;
		temp=temp/10;
	}
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,digits);
		temp=temp/10;
	}
	if (sum==n)
	printf("Armstrong Number");
	return 0;
	
}
