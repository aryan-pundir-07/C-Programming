#include<stdio.h>
int main(){
    int cp,sp;
    printf("entre cost price:");
    scanf("%d",&cp);
    printf("Entre selling price :");
    scanf("%d",&sp);
if(sp>cp){
    printf("PROFIT");
}
else if(sp<cp){
    printf("LOSS");
}
else{
    printf("Neither loss not profit");
}
    return 0;
}