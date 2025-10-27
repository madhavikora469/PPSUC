#include<stdio.h>
int main()
{{
	int u,a,t,s;
	printf("enter the intial velocity");
	scanf("%f", &u);
	printf("enter the acceleration");
	scanf("%f",&a);
	printf("enter the time");
	scanf("%f",&t);
	s=u*t+0.5*a*t*t;
	printf("the distance travelledby a body:%2f\n",s);
	return 0;	
}
