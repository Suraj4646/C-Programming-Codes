#include<stdio.h>
	int main()
	{
	int n;
	printf("enter the number of array");
	scanf("%d",&n);
	int a[n],i,max=0,smax=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	smax=a[0];
	max=a[0];
	if(a[i]>max)
	{
		smax=max;
		max=a[i];
	}
	printf("largest element of array is %d",max);
	printf("\n second largest element of array is %d",smax);
	return 0;
	}