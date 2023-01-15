#include<stdio.h>
int main()
{
	float a,b,c;
	printf("if u get in km to m press 1 and get m to km press 2=\n");
	scanf("%f",&a);
	if(a==1)
	{
		printf("enter number=");
		scanf("%f",&b);
		c=b*1000;
		printf("given number in meter is %f",c);
	}
		else if(a==2)
	{
	printf("enter a number=");
	scanf("%f",&b);
	c=b/1000;
    printf("given number in meter is %f",c);
	}
	else
	printf("none");
	return 0;
}
