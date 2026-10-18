#include<stdio.h>
int main(){
    int l,b;
    printf("entre length:");
    scanf("%d",l);
    printf("entre breadth");
    scanf("%d",&b);
    int area=l*b;
    int para=2*(l+b);
if(area>para){
    printf("Area is greater than parameter");
}
else{
    printf("Parameter is greater than area");
}
    return 0;
}