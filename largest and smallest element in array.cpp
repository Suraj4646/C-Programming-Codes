	#include<stdio.h>
	int main()
	{
	int n;
	printf("enter the number of array");
	scanf("%d",&n);
	int a[n],i;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	int max=0,min=0;
	max=a[0];
	min=a[0];
	for(int i=0;i<n;i++)
	{
	
	if(a[i]>max)
	max=a[i];
	if(a[i]<min)
	min=a[i];
}
	printf("largest no. is %d",max);
	printf("smallest no. is %d",min);
	return 0;
}
	