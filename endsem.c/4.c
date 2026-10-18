#include<stdio.h>
int sum(int x){ 
   if(x==1)
   return 1;
    return x + sum(x-1);
}
    
int main(){
    sum(4);
    return 0;
}