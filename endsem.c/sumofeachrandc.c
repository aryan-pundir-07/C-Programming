#include<stdio.h>
int main(){
int r;
int c;
printf("Enter no. of rows nd columns :");
scanf("%d %d",&r,&c);
int ar[r][c];
printf("Enter elements :\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&ar[i][j]);
    }
}
printf("The matrix is :\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",ar[i][j]);
    }
    printf("\n");
}
int sumrow=0;
int sumc=0;
for(int i=0;i<r;i++){
    sumrow=0;
    for(int j=0;j<c;j++){
        sumrow+=ar[i][j];
        }
        printf("The sum of row %d is : %d",i+1,sumrow);
        printf("\n");
}
for(int i=0;i<c;i++){
    sumc=0;
    for(int j=0;j<r;j++){
        sumc+=ar[j][i];
    }
        printf("The sum of column %d is : %d",i+1,sumc);
        printf("\n");
}
return 0;
}