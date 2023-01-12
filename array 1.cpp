#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of array");
	scanf("%d",&n);
	int a[n],e[n],o[n],j=0,k=0,i;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	
	if(a[i]%2==0)
	e[k++]=a[i];
	else
	o[j++]=a[i];
    
    printf("even array \n");
    for(int i=0;i<=k-1;i++)
    printf("%d\t",e[i]);
    printf("\n odd array \n");
    for(int i=0;i<=j-1;i++)
    printf("%d\t",o[i]);
	
	return 0;
}