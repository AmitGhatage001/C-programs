#include<stdio.h>

int main(){
    int array[5];
    printf("enter 5 elements in array");
    printf("\n");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    
    for(int i=0;i<5;i++){
        printf("%d",array[i]);
        printf("\t");
    }
}