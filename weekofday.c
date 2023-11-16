#include<stdio.h>
#include<stdlib.h>
void main()
{
int weekday;
printf("Enter the number of the day of week: ");
scanf("%d",&weekday);
switch (weekday)
{
case 1 :
  printf("The day of week is monday\n");
  break;
case 2 :
  printf("The day of week is tuesday\n");
  break;
case 3 :
  printf("The day of week is wednesday\n");
  break;
case 4 :
  printf("The day of week is thursday\n");
  break;
case 5 :
  printf("The day of week is friday\n");
  break;
case 6:
  printf("The day of week is saturday\n");
  break;
case 7 :
  printf("The day of week is sunday\n");
  break;  
default :
  printf("Invalid number");
  break;
}
}
  
