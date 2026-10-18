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
printf("After rotating clockwise :");
for(int j=0;j<c;j++){
    for( int i=r-1; i>=0;i--){
        printf("%d ",ar[i][j]);
    }
    printf("\n");
}
return 0;
}