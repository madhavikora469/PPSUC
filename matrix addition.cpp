#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],x[10][10],i,j,r,c;
	printf("enter row and column values\n");
	scanf("%d%d",&r,&c);
	printf("enter A matrix elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter B matrix elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix addition is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
