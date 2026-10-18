#include<stdio.h>
int main(){
int r1,c1,r2,c2;
printf("Enter no. of rows nd columns of matrix A :");
scanf("%d %d",&r1,&c1);
printf("Enter no. of rows nd columns of matrix B :");
scanf("%d %d",&r2,&c2);
if(c1!=r2){
    printf("Invalid multiplication !");
    return 0;
}
else {
    int A[r1][c1], B[r2][c2];
printf("Enter elements IN A:");
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("Enter elements IN B:");
for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        scanf("%d",&B[i][j]);
    }
}
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
}
    printf("\n");
    for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        printf("%d ",B[i][j]);
    }
    printf("\n");
}
    printf("\n");
    printf("Multiplication matrice of matrix A and B is :\n");
    int mult;
    for(int i=0; i<r1;i++){
        for (int j=0 ; j<c2; j++){
            mult=0;
            for (int k=0;k<c1;k++){
            mult+=A[i][k]*B[k][j];
            }
            printf("%d ",mult);
        }
        printf("\n");
    }
}
return 0;
}