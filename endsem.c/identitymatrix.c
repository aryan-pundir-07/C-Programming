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
printf("The matrix is :\n");
int flag=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==j && ar[i][j]==1 || i!=j && ar[i][j]==0){
            flag++;
        }
    }
}
if(flag==r*c){
    printf("Identity matrice");
}
else{
    printf(" Not Identity matrice");
}
return 0;
}