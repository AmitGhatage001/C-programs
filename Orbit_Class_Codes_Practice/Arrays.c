#include<stdio.h>
int main(){
    int arr[10];
    //intializing the array
    printf("Enter elements into the array\n");
    for(int i=0;i<10;i++){
        printf("Enter the elemet\n");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
}