#include<stdio.h>
int main(){
    int n;
    printf("Enter row :");
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++){
        for(int k=1;k<=n-i+1;k++){
            printf(" ");
        }
        for(int j=2;j<=i;j++){
            printf("*");
        }
        for(int l=2;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}