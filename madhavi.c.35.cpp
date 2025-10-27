#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,d,root1,root2,realpart,imagpart;
	printf("enter coefficients a,b and c:");
	scanf("%1f %1f %1f,&a,&b,&c");
	d=b*b-4*a*c;
	if (d>0)
{
	root1 =(-b+sqrt(d))/(2*a);
	root2 =(-b-sqrt(d))/(2*a);
	printf("root1 =%.21f and root2=%.21f", root1,root2);
}
else if (d==0)
{
	root1=root2= -b/(2*a);
	printf("root1 = root2 = %.21f", root1);
	
}
else
{
	realpart =-b/(2*a);
	imagpart = sqrt(-d)/(2*a);
	printf("root1=%.21f+%.21fi and root2 =%.2f-%.2fi",realpart,imagpart);
}
return 0;
}
	


