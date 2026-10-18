#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    printf("Enter elements in str 1:");
    scanf("%[^\n]",str1);
    printf("Enter elements in str 2:");
    scanf(" %[^\n]",str2);
    int l1=strlen(str1);
    int l2=strlen(str2);
    if(l1==l2){
    for(int i=0; i<l1; i++){
        for(int j=i+1 ; j<l1 ;j++){
            char temp = str1[i];
            str1[i]=str1[j];
            str1[j]=temp;
        }
    }

     for(int i=0; i<l1; i++){
        for(int j=i+1 ; j<l1 ;j++){
            char temp = str2[i];
            str2[i]=str2[j];
            str2[j]=temp;
        }
    }

int x=strcmp(str1,str2);
if(x==0){
    printf("ANAGRAM");
}
else{
    printf("NOT ANAGRAM");
}
    }
    else{
        printf("NOT ANAGRAM");
    }
    return 0;
}