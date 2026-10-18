#include<stdio.h>
int main(){
    int n;
    printf("no of lines:");
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
           if(a<=9){
            printf("%d",a);
            a++;
           }
          
        }
        printf("*");
    }
    return 0;
}