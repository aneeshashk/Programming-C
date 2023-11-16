#include<stdio.h>
void main()
{
int a[5]; int avg,sum,i;
for(i=0;i<5;i++){
printf("Enter the marks :");
scanf("%d",&a[i]);
}
sum=0;
for(i=0;i<5;i++){
sum+=a[i];
}
printf("The sum of the marks is %d\n",sum);
avg=sum/5;
printf("The average of the marks are: %d\n",avg);
}
