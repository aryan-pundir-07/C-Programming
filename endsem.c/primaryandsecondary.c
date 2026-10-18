#include<stdio.h>
int main(){
int r;
int c;
printf("Enter no. of rows nd columns :");
scanf("%d %d",&r,&c);
int ar[r][c];
printf("Enter elements :");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&ar[i][j]);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",ar[i][j]);
    }
    printf("\n");
}
int sumprime=0;
int sumsec=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==j){
            sumprime+=ar[i][j];
        } 
        if(i+j==r-1){
            sumsec+=ar[i][j];
        }
        }
}
printf("%d ",sumprime);
printf("%d ",sumsec);
return 0;
}