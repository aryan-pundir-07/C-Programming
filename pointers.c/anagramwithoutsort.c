#include <stdio.h>
int main(){
    int n1,n2;
    int c=0;
    printf("Enter no of ele for 1: ");
    scanf("%d",&n1);

    printf("Enter no of ele for 2: ");
    scanf("%d",&n2);

    if(n1!=n2){
        printf("NOT");
        return 0;
    }

    char a1[n1], a2[n2];

    printf("Enter element for 1:\n");
    for(int i=0;i<n1;i++){
        scanf(" %c",&a1[i]);
    }

    printf("Enter element for 2:\n");
    for(int i=0;i<n2;i++){
        scanf(" %c",&a2[i]);
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a1[i]==a2[j]){
                c++;
                break;
            }
        }
    }

    if(c==n1)
        printf("ANAGRAM");
    else
        printf("NOT");

    return 0;
}
