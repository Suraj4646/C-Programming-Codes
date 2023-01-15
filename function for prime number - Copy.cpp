#include<stdio.h>
int main()


	{
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
    }
    int prime(int n)
	{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		
		c++;
	}
	}
		if(c==2)
		{
			
		printf("\n%d is prime number",n);
		}
		else
		{
		printf("\n%d is not prime number",n);
}
returen 0;

}
