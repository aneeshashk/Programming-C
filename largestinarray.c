#include<stdio.h>
void main(){
int a[5],largest,i;
for(i=0;i<5;i++){
printf("Enter the values :");
scanf("%d",&a[i]);
}
largest=a[0];
for(i=1;i<5;i++)
{if(a[i]>largest){
largest=a[i];
}
}
printf("The largest value is %d\n",largest);
}
