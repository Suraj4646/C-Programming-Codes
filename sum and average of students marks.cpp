#include<stdio.h>
int main()
{
int e,h,s,m,c;
float t,p;
printf("enter marks of english=");
scanf("%d",&e);
printf("enter marks of hindi=");
scanf("%d",&h);
printf("enter marks of science=");
scanf("%d",&s);
printf("enter marks of mathemathics=");
scanf("%d",&m);
printf("enter marks of computer=");
scanf("%d",&c);
t=(e+h+s+m+c);
p=t/5;
printf("percent=%f %%",p);
}
