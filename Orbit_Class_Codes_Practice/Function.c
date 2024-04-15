#include<stdio.h>

int add(int a,int b){

    return a + b;
}

int main(){
    int a=10;
    int b=25;

    int ans=add(a,b);

    printf("%d \n",ans);
}

