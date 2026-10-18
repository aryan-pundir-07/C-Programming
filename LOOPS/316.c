#include<stdio.h>
int main(){
    // int x, n;
    // printf("Enter no. of elements :");
    // scanf("%d", &n);
    // printf("Enter Target :");
    // scanf("%d", &x);

    int a1[] = {1,2,3,4,5};
    //for(int i = 0; i < n; i++){
    //    scanf("%d", &a1[i]);
    //}
int x=5;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){ 
            if((a1[i] + a1[j]) == x){
                printf("%d,%d\n", i, j);
                
            }
        }
    }

   return 0;

  
}