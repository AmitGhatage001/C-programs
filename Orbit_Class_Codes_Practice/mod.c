#include<stdio.h>

int main(){
    int num=1325;
    //reversing the number using modulus logic 
    // logic 
    // Brute Force approach 132 5
    // int ans=0;
    // for(int i=0;i<4;i++){
    //     ans=num%10;
    //     printf("%d",ans);
    //     num=num/10;
    //     ans=0;
    // }

    // Optimized Approach
    int ans=0;
    int rem=0;
    for(int i=0;i<4;i++){
        rem=num%10;
        ans=ans*10 + rem;
        num=num/10;
    }
    printf("%d\n",ans);
}