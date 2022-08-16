//checking prime number Or not in C Program
#include<stdio.h>

int main()
{
int n,i,m=0,flag =0;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("NUMBER IS NOT PRIME!");
flag=1;
break;
}
}
if(flag==0) 
printf("NUMBER IS PRIME!");
return 0;
}