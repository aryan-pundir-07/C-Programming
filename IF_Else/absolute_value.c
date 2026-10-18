#include<stdio.h>
int main(){
    int n;
    printf("entre a no. :");
    scanf("%d",&n);
if(n<=0){
    n=n*(-1);
}
 printf("the absolute value is :%d",n) ;
   return 0;
}