// Convert Binary to Decimal using functions in c
// reverse the 4 digit number using function in c

#include<stdio.h>
int main(){
    int num,ans;
    int reverse(int);
    printf("Enter the 4 Digit Number\n");
    scanf("%d",&num);
    ans=reverse(num);
    printf("reversed Number is %d",ans);
}
int reverse(int num){
    //4132
    int ans=0;
    while(num>0){
        int digit=num%10;
        ans=ans*10+digit;
        num=num/10;
    }
    return ans;
}