#include<stdio.h>
int power(int a,int b)
{
	int p=1;
	for(int i=1;i<=b;i++)
	p=p*a;
	return p;
}
int main()
{
	int a,b;
	scanf("%d %d ",&a,&b);
	printf("%d\n",power(a,b));
	printf("%d\n",power(2,4));
	return 0;
	
}