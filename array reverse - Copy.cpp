#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of array");
	scanf("%d",&n);
	int a[n],max=0,min=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	for(int i=1;i<n;i++)
	{
	if(a[i]>max)
	{
	max=a[i];
	}
	if(a[i]<min)
	{
	min=a[i];}
	
	
}
printf("largest element is %d",max);
printf("\n\smallest element is %d",min);

	
	return 0;
}