#include<stdio.h>
int main()
{
	float fahrenheit,celius;
	printf("enter the fahrenheit");
	scanf("%f", &fahrenheit);
	celius =(fahrenheit-32)*5.0/9.0;
	printf("temperature in celius %2f\n",celius);
return 0;

}
