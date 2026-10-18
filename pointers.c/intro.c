#include<stdio.h>
int main(){
    int a=0,x=0;
    int i=0;
    char st[50];
    scanf("%[^\n]",st);
    while(1){
        if(st[i]==' '|| st[i]=='\0'){
            x=i-1;
            while(a<x){
                char t= st[a];
                st[a]= st[x];
                st[x]= t;
                a++;
                x--;
            }
            a=i+1;
        }
            if(st[i]=='\0'){
                break;
            }
            i++;

    }
    printf("%s",st);
    return 0;
}                                         