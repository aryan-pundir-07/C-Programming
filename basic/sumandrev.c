#include<stdio.h>
int main(){
    int n;
    printf("Entre no.:");
    scanf("%d",&n);
    int sum=0;
    int r= 0;
    while (n>0)
    {sum=sum+(n%10);
        r=r*10;
        r=r+(n%10);
        n=n/10;    
    }
    printf("The sum of the no is : %d\n",sum);
    printf("The reverse of the no is : %d",r);
    
    return 0;
}