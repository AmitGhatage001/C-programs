#include<stdio.h>
int main(){
    int i=0;
    while(1){
        i++; 
        // i is incremented here bcz if i is incremented below printf statement when i equals 5 continue 
        // statement bypasses the loop but i is never incremented bcz it is incremented after the continue
        // i stucks at 5 and never reaches to nextincremental value and only till 4 is printed
        // logic to skip 5
        if(i==5){
        continue;
        }
        // logic to stop at 10 and
        if(i==10)
        break;

        printf("%d\n",i);
              
    }
    return 0;
}