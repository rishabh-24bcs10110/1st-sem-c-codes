#include<stdio.h>
void main()
{
int sum=0,n,r,c;
printf("enter the number");
scanf("%d",&n);
int temp=n;
while(n>0)
{
r=n%10;
c=r*r*r;
sum=sum+c;
n=n/10;
}
if (sum==temp)
{
printf("armstrong number");
}
else
{
printf("not armstrong number");}
}
