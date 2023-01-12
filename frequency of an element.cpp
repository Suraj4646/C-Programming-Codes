#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of array");
	scanf("%d",&n);
	int a[n],i,r,t,k;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	for(int k=0;k<=r;k++)
	t=a[0];
	for(int i=0;i<n-1;i++)
	a[i]=a[i+1];
	a[n-1]=t;
	for(int k=0;k<n;k++);
	printf("%d\t",a[k]);
	 return 0;
}