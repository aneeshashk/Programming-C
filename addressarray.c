#include<stdio.h>
void main(){
int a[10]; int element,i;
for(i=0;i<10;i++){
printf("Enter the values :");
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
printf("The address of %d is %p\n",a[i],&a[i]);

}

}
