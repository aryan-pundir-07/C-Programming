#include<stdio.h>
int main(){
    int n;
    printf("Entre the no :");
    scanf("%d",&n);
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("The no. is composite");
            break;
        }
        else{
            printf("THE NO. IS prime");
            break;
        }
    }
    if(n==2){
        printf("THE NO IS PRIME");
    }
    else if(n==1){
        printf("the no is not prime not composite");

    }
    return 0;
}