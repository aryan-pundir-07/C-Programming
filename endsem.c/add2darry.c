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
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",ar[j][i]);
    }
    printf("\n");
}
return 0;
}