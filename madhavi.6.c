#include<stdio.h>
int main()
{
	int a;
	float b; 
	char c;
	char str[10];
	printf("enter a number:\n");
	scanf("%d\n" ,&a);
	printf("enter the floating point values:\n");
	scanf("%f\n" ,&b);
	printf("enter the char values:\n");
	scanf("%c\n" ,&c);
	printf("enter the string values;\n");
	scanf("%s\n" ,str);
	printf("%d\n%f\n%c\n%s" ,a,b,c,str);
return 0;
	
}
