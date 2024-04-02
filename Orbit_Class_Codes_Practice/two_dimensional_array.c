#include<stdio.h>
int main(){
    //Declaring two dimensional array
    int arr[5][5];

    // reading elements into array
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Enter the element\n");
            scanf("%d",&arr[i][j]);
        }
    }

    //Displaying 2D array
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}