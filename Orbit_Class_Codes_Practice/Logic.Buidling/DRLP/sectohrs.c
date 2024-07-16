#include <stdio.h>

int main(){
    printf("Enter Number of Seconds");
    printf("\n");
    int sec;
    scanf("%d",&sec);
    // Logic
    int hrs=sec/3600;
    sec=sec%3600;

    int min=sec/60;
    sec=sec%60;

    printf("%d Hrs: %d mins: %d Sec",hrs,min,sec);
    return 0;
    
}