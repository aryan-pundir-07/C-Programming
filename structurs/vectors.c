#include<stdio.h>

typedef struct vector
{ 
    int x;
    int y;
    
} vec ;
void add( vec v1 , vec v2){
printf("%d\n",v1.x + v2.x);
printf("%d",v1.y + v2.y);


}

int main(){
    vec v1;
    vec v2;
    printf("Enter x and y coordinates vector 1:");
    scanf("%d %d",&v1.x,&v1.y);
printf("Enter x and y coordinates of vector 2:");
    scanf("%d %d",&v2.x,&v2.y);
    add(v1,v2);
    return 0;
}


