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
int min;
for(int i=0;i<c;i++){
    min=ar[0][i];
    for(int j=0;j<r;j++){
        if(ar[j][i]<min){
        min=ar[j][i];
        }
    }
     printf("the min ele of column %d is %d ",i+1,min);
    printf("\n");
}

return 0;
}