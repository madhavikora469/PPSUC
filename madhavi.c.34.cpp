#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter operator(+,-,*,/,%):");
	scanf("%c",&op);
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		
		case '+':c=a+b;
		         printf ("addition is :%d",c);
		         break;	         	
	   case '-':c=a-b;
	            printf("substraction is :%d",c);
	            break;
	   case '*':c=a*b;
	            printf("multiplication is :%d",c) ;
				break;
		case '/':c=a/b;
		         printf("division is :%d",c);
				 break;
		case '%':c=a%b;
		         printf("remainder is :%d",c);
				 break;
				 
		default:printf("invalid operator");	
		break;
	} 
		return 0;
}
