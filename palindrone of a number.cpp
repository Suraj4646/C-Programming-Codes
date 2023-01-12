#include<stdio.h>
int main()
{
	int a,sum=0,r;
	int t=a;
	printf("enter value a=");
	scanf("t=a is %d",&t);
	while(a>0)
	{
		r=a%10;
		sum=(sum*10)+r;
		a=a/10;
	}
	if(t==sum)
	{
	
		printf("palindrone");
	}else
    {
    	printf("not");
	}
	
	return 0;
}