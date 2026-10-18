#include<stdio.h>
int main(){
    int n;
    printf("no of lines:");
    scanf("%d",&n);
   for(int i=1; i<=n;i++){
    for(int k=1;k<=n-i;k++){
        printf(" ");
    }
    char ch=65;
    for(int j=1;j<=i;j++){
        printf("%c",ch);
        ch++;
    }
    for(int l=i+1;l<=2*i-1;l++){
        printf("%c",ch);
        ch++;
    }
    printf("\n");
   }
    return 0;
} 