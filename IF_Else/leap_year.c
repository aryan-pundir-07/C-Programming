#include<stdio.h>
int main(){
    int n;
    printf("entre year:");
    scanf("%d",&n);
if(n%4==0){
    printf("LEAP YEAR");
}
else{
    printf("NOT A LEAP YEAR");
}
    return 0;
}