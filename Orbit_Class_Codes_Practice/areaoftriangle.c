#include <stdio.h>

int main(){
    // start

    //Declare 
    double height;
    double breadth;

    //Read
    printf("Enter length\n");
    scanf("%lf",&height);

    printf("Enter breadth\n");
    scanf("%lf",&breadth);

    //Calculate
    double area=(height*breadth)/2;

    //print
    printf("Area of rectangle is: %lf",area);

    //stop
}