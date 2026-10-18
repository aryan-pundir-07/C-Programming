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
int max= ar[0][0];
int min= ar[0][0];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(ar[i][j]>max){
            max=ar[i][j];
        } 
        if(ar[i][j]<min){
            min=ar[i][j];
        }
        }
}
printf("%d ",max);
printf("%d ",min);
return 0;
}