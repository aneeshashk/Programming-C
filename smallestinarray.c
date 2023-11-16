#include<stdio.h>
void main(){
int a[5],smallest,i;
for(i=0;i<5;i++){
printf("Enter the values :");
scanf("%d",&a[i]);
}
smallest=a[0];
for(i=1;i<5;i++)
{if(a[i]<smallest){
smallest=a[i];
}
}
printf("The smallest value is %d\n",smallest);
}
