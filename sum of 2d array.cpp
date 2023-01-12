#include<stdio.h>
 int main()
 {
 	int r,c;
 
 	scanf("%d %d",&r,&c);
 	int i,j,a[r][c];
 	for(int i=0;i<r;i++)
 	{
 		for(int j=0;j<c;j++)
 		scanf("%d",&a[i][j]);
 		printf(" \n ");
	 }
	  for(int i=0;i<r;i++)
	 {
	 	for(int j=0;j<c;j++)
	 	printf("%d",a[i][j]);
	 	printf("\n\n");
	 }
	 	 for(int i=0;i<r;i++)
	 {
	 	for(int j=0;j<c;j++)
	 	if(i==j)
	 	if(a[i][j]==1)
	 	c++;
	 
	 else
	 if(a[i][j]==0)
	 c++;
}
if(c==r*c)
printf("identity");
else
printf("not identity");
return 0;
}
           