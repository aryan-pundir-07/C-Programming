#include<stdio.h>
void main(){
int a,s,ss,m,d;
int *p=&a;
printf("Enter a value:");
scanf("%d",&a);
int temp = a;
printf("original address :%p",*p);
printf("\noriginal value :%d",*p);
printf("\nEnter value for addition :");
scanf("%d",&s);
*p=*p+s;
printf("value after addition :%d",a);
*p=temp;
printf("\nEnter value for subtraction :");
scanf("%d",&ss);
*p=*p-ss;
printf("value after subtraction :%d",a);
*p=temp;
printf("\noriginal address :%p",*p);
printf("\nEnter value for Multiplication :");
scanf("%d",&m);
*p=*p * m;
printf("value after Multiplication :%d",a);
*p=temp;
printf("\noriginal address :%p",*p);
printf("\nEnter value for Divison :");
scanf("%d",&d);
*p=*p / d;
printf("value after divion :%d",a);
*p=temp;
printf("\noriginal address :%p",*p);
}