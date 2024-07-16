#include <stdio.h>

int main(){
    //Declare
    int n;
    //Read
    printf("Enter the Number");
    scanf("%d",&n);
    //Logic & print result
    if(n%2==0){
        n=n-1;
        while(n>=1){
            printf("%d",n);
            printf("\n");
            n=n-2;
        }
    }
    else{
        while(n>=1){
            printf("%d",n);
            printf("\n");
            n=n-2;
        }
    }
}