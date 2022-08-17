//Palindrome in C Program
#include<stdio.h>

int main()
{
int n,r,sum=0,temp;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum) 
printf("PALINDROME NUMBER");
else
printf("NOT PALINDROME NUMBER");
return 0;
}