#include<stdio.h>

int Factorial(int num){
    if(num==1)
    return 1;
    return num*Factorial(num-1);
}

int main(){
    //Recusrsion in C language using Functions

    // Factorial Program
    printf("Enter the Number\n");
    int num;
    scanf("%d",&num);

    //Recursive Logic
    int ans=Factorial(num);
    printf("factorial is %d\n",ans);
}