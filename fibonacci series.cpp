#include<stdio.h>
int main()
{
	int a=0,b=1,c;
		while(a<=1000)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	
	return 0;
}