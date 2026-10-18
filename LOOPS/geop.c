#include<stdio.h>
int main(){
    float n;
    float a=100.0;
    printf("Entre no of terms:");
    scanf("%f",&n);
    for(float i=1;i<=n;i++){
        printf("%f\n",a);
        a=a*0.5;
    }
        
    return 0;
}