#include<stdio.h>

int main(){
    printf("Enter Number of Day's\n");
    int days;
    scanf("%d",&days);
    //Logic
    int yrs=days/365;
    days=days%365;

    int months=days/30;
    days=days%30;
    
    int day=days;
    //OP
    printf("Conversion is as %d years %d months %d days",yrs,months,day);

}