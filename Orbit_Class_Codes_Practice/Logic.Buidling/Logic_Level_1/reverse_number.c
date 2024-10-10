#include<stdio.h>

int main(){
    printf("Enter Number\n");
    int num;
    scanf("%d",&num);
    //Logic
    int ans=0;
    do{
        int digit = num%10;
        ans=ans*10 + digit;
        num=num/10;
    }
    while(num>0);
    

    printf("Reversed Number is: %d",ans);
}