#include<stdio.h>
void main()
{
int n,sum=0,reminder,originalnum;
printf("Enter a number:");
scanf("%d",&n);
originalnum=n;
while(n>0)
{
reminder=n%10;
n=n/10;
sum=su+reminder*reminder*reminder;
}
if(originalnum==sum)
{
printf("The number %d is an armstrong number\n",originalnum);
}
else
{
printf("The number %d is not an armstrong number\n",originalnum);
}
}
